int x = 0, y = 0, z = 0, p = 0;
void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);
  if (x == 515 && y == 507)
  { digitalWrite(6, 0);
    digitalWrite(5, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
  }





else if (x < 515) {

  analogWrite(6, 255);

}

else if (x > 507) {
  analogWrite(5, 255);
}
else if (y > 515) {
  analogWrite(11, 255);



}
else if (y < 515) {
  analogWrite(10, 255);


}
else
{
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(11, 0);
  analogWrite(10, 0);

}

}
