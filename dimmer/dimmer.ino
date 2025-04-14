int (i=255);
void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  analogWrite(11,255);
  delay(100);
  analogWrite(11,200);
  delay(100);
  analogWrite(11,150);
  delay(100);
  analogWrite(11,100);
  delay(100);
  analogWrite(11,50);
  delay(100);
  
}
