int x;
void setup() {
  Serial.begin(9600);
  pinMode(D2,OUTPUT);
}

void loop() {
analogWrite(D2,255);
delay(250);
analogWrite(D2,200);
delay(250);
analogWrite(D2,150);
delay(250);
analogWrite(D2,100);
delay(250);
analogWrite(D2,50);
delay(250);
analogWrite(D2,0);
 delay(250);
}
