void setup() {
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  digitalWrite(D2, HIGH);
  delay(2000);
  digitalWrite(D2, LOW);

  digitalWrite(D3, HIGH);
  delay(2000);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D5, LOW);


}
