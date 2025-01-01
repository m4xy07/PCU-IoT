//Switch Common Terminal and LED Ground connected to Ground on arduino
int LEDPIN = 13;
void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(5, INPUT_PULLUP); // Switch Right Terminal Connected to Pin 5 on Arduino
}

void loop() {
  digitalWrite(LEDPIN, digitalRead((5)));
}
