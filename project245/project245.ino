void setup() {
    Serial.begin(9600);
}

void loop() {

  int analogValue = analogRead(4);  // 4 is the pin reading potentiometer 
  int potent = map(analogValue, 0, 4095, 0, 255);

  if (potent > 200) {
    Serial.println("Decreasing The Volume");
    digitalWrite(26, HIGH); // 26 is the BUZZER PIN
    delay(100);
  }

  digitalWrite(26, LOW); // 26 is the BUZZER PIN
  Serial.println(potent);
  delay(30);
}
