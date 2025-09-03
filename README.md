# Arduino Vossenjacht - 🇳🇱
For :gb: see below.

## Benodigdheden
* Evenveel Arduino’s met Wi-Fi als dat je “vossen” wil hebben
* Een PC met Arduino IDE geïnstalleerd
* De code, hier boven te downloaden
* Een USB kabel om je Arduino’s met je computer te verbinden
* Smartphones per deelnemer/groepje

Optioneel:
* Doosjes waar je Arduino’s in kunnen
* Stroombron voor de Arduino’s (batterijen, powerbanks, etc)

## Wat is het?
We gaan een vossenjacht maken, maar dan net even wat anders. In plaats van dat de vossen echte personen zijn, 
worden het stationaire Arduino’s die een Wi-Fi netwerk uitzenden. Om daarop in te kunnen loggen heb je echter 
wel telkens een code nodig die je van de vorige vos krijgt. Je verbindt dus bijvoorbeeld met het vos-1 netwerk, 
daar krijg je het wachtwoord “geheim123”. Vervolgens ga je op zoek naar vos-2. Daar kan je dan met die code 
inloggen.

## Hoe stel je het in?
Nou, je plukt eerst de code van de bovenstaande link. Dit is de “basis” code. Deze code moet je voor elke vos 
aanpassen. We gaan hiervoor gebruik maken van de Arduino IDE (weet je niet hoe die werkt? Kijk dan eens op 
https://jota-joti.scouting.nl/wp-content/uploads/2024/05/Handleiding-Arduino.pdf ). Open de gedownloade Vos.ino 
en verbind 1 voor 1 de Arduino’s met je computer. Vul het wachtwoord van de volgende vos in op regel 8, 
bijvoorbeeld door `const char *nextpassword = "";` te veranderen in `const char *nextpassword = "geheim123";`. 
Pas eventueel ook de netwerknaam aan op regel 5 zodat die het juiste nummer van de Vos weergeeft, en op regel 6 
het wachtwoord voor die Vos zelf.

Nadat je al deze code hebt geüpload moet je zorgen dat de Arduino’s ook werken “in het veld”. We raden daarvoor 
aan om kleine harde plastic doosjes te gebruiken en daar de Arduino in te doen. Deze koppel je dan aan een 
powerbank, of je soldeert een batterij(houder) direct aan je Arduino zelf. Vergeet er niet ook een schakelaartje
tussen te doen zodat hij ook echt uit en aan kan gaan!

## Vossen gemaakt, en nu?
Nu kan je losgaan met het spelen van het spel! Verspreid vooraf alle vossen over een afgesproken speelgebied en 
zorg dat ze aan staan en goed werken (dus test alles van tevoren door). Vervolgens stuur je de deelnemers het 
veld in op zoek naar alle vossen. De allerlaatste Vos van jouw reeks heeft een speciale code die de deelnemers 
weer terug moeten nemen naar het startpunt. De eerste met die speciale code heeft gewonnen.

# Arduino Foxhunt - 🇬🇧
## Requirements
* As many Wi-Fi-enabled Arduinos as the number of “foxes” you want
* A PC with the Arduino IDE installed
* The code, downloadable above
* A USB cable to connect your Arduinos to your computer
* Smartphones for each participant/team

Optional:
* Boxes to put the Arduinos in
* Power source for the Arduinos (batteries, power banks, etc.)

## What is it?
We’re going to create a foxhunt, but with a twist. Instead of the foxes being real people,
they will be stationary Arduinos broadcasting a Wi-Fi network. However, to log in, you’ll
need a code provided by the previous fox. For example, you connect to the “fox-1” network,
where you receive the password “secret123.” Then you go search for fox-2, which you can log
into using that password.

## How do you set it up?
First, grab the code from the link above. This is the “base” code. You’ll need to adjust this
code for each fox. We’ll use the Arduino IDE for this (don’t know how it works? Check out
https://jota-joti.scouting.nl/wp-content/uploads/2024/05/Handleiding-Arduino.pdf). Open the
downloaded Vos.ino and connect the Arduinos to your computer one by one. On line 8, enter
the password for the next fox, for example by changing
`const char *nextpassword = "";` into `const char *nextpassword = "secret123";`.
Optionally, also adjust the network name on line 5 to reflect the correct fox number, and
on line 6 the password for that specific fox itself.

Once you’ve uploaded all the code, you’ll need to make sure the Arduinos also work “in the
field.” We recommend using small, sturdy plastic boxes to house the Arduinos. Connect them
to a power bank, or solder a battery (holder) directly to your Arduino. Don’t forget to
add a small switch in between so you can actually turn it on and off!

## Foxes ready, now what?
Now you can start playing the game! Beforehand, place all the foxes around the agreed
playing area and make sure they’re on and working properly (so test everything in advance).
Then send the participants into the field to find all the foxes. The very last fox in your
sequence has a special code that participants must bring back to the starting point. The
first team to return with that special code wins.
