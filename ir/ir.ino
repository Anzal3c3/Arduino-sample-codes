int x , c;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);

}

void loop() {
  x=digitalRead(12);
  if( x==0)
  {
    digitalWrite(13, HIGH);
  delay(1000);
   Serial.println("obstacle detected");
   c = c+1;
   }
  else{
   digitalWrite (13,LOW);
  delay(1000);
   Serial.println("no obstacle detected");
   }
   Serial.println(c);
  

}
