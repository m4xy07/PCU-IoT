int ldrPin = A0;
//We can use either D0 (Digital) or A0 (Analog), in this example we use only analog pin
//VCC pin connects to 5v on arduino, and GND to GND

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.print("Light Intensity: ");
  Serial.println(ldrValue);
  // If you point a laser or light at the LDR, it will change
  delay(500);
}
