void setup() {
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);

}

void loop() {
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  delay(5000);
  digitalWrite(D3, HIGH);
  digitalWrite(D2, LOW);
  delay(5000);

}
