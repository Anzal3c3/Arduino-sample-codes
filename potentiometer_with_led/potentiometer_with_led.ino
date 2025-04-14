int x;
void setup() {
  pinMode(9,OUTPUT);

}

void loop() {
  x=analogRead(A0);
  x=map(x,0,1023,0,255);
  analogWrite(9,x);

}
