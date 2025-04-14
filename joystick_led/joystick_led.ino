int x=0,y=0,val=0;
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11 ,OUTPUT);
}

void loop() {
   x=analogRead(A0);
   x=map(x,0,1023,0,255);
   analogWrite(x,10);  
   y=analogRead(A1);
  y=map(y,0,1023,0,255);
        analogWrite(y,11);                                                                                  
}
