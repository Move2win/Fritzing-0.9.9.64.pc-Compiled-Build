/*
  Blink

  Schaltet eine LED im Rythmus von einer Sekunde an und aus

  Dieses Beispiel aus dem Fritzing Creator Kit: www.fritzing.org/creator-kit.
*/

int led = 13;                   // ganzzahlige Variable led wird deklariert

void setup() {                  // die setup()-Methode wird einmal ausgeführt
  pinMode(led, OUTPUT);
}

void loop() {                   // die loop()-Methode wird immer wiederholt
  digitalWrite(led, HIGH);      // schaltet die LED ein
  delay(1000);                  // hält das Programm für 1000 Millisekunden an
  digitalWrite(led, LOW);       // schaltet die LED ab
  delay(1000);                  // hält das Programm für 1000 Millisekunden an
}
