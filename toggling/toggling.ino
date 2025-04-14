boolean lastbutton = LOW;
boolean ledstate = LOW;
void setup() {
  pinMode(7, INPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  if (digitalRead(7) == HIGH && lastbutton == LOW)
  {
    ledstate = !ledstate;
    lastbutton = HIGH;
  }
  else
  {
    lastbutton = digitalRead(7);

  }
  digitalWrite(6, ledstate);
  delay(25);


}
