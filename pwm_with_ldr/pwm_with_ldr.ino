
void setup() {
  pinMode(11,OUTPUT);
  

}

void loop() {
   int x=analogRead(A0);
   x=map(x,0,1023,0,255);     
        analogWrite(11,x);
}
