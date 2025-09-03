#include <Arduino.h>
#include <WiFi.h>
#include <WiFiAP.h>

const char *sid = "vos-1";
const char *password = "";

const char *nextpassword = "";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  while (WiFi.softAP(sid, password) != true) {
    log_e("Soft AP creation failed.");
    sleep(1000);
  }

  IPAddress myIP = WiFi.softAPIP();
  server.begin();
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    Serial.println("New Client.");
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c)
        if (c == '\n') {
          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();

            client.print("<html>");
              client.print("<head>");
                client.print("<meta name=\"viewport\" content=\"width=devide-width,initial-scale=1.0\">");
              client.print("<head>");
              client.print("<body>");
                client.print("<h1 style=\"width:0.5vw\">" + nextPassword + "</h1>");
              client.print("</body>");
            client.print("</html>");
            client.println();
            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }
      }   
    }
  }
}