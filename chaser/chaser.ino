int x=0;
void setup() {
  for(x=2;x!=14;x++)
  pinMode(x,OUTPUT);
}

void loop() {
  for(x=2;x!=14;x++)
  {digitalWrite(x,HIGH);
   delay(250);
   digitalWrite(x,LOW);
   delay(250);
 }
 x=0;
}
