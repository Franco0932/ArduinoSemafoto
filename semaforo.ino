int LedVerde = 6;
int LedNaranja = 4;
int LedRojo = 2;

void setup(){
  pinMode(LedVerde, OUTPUT);
  pinMode(LedNaranja, OUTPUT);
  pinMode(LedRojo, OUTPUT);
}

void loop(){
  digitalWrite(LedVerde, HIGH);
  delay(2000);
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedNaranja, HIGH);
  delay(1000);
  digitalWrite(LedNaranja, LOW);
  digitalWrite(LedRojo, HIGH);
  delay(2000);
  digitalWrite(LedRojo, LOW);
}
