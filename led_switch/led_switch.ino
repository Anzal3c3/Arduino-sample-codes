int x=0;
void setup() {
   pinMode(13,INPUT);
   pinMode(12,OUTPUT);

}

void loop() {
  x=digitalRead(13);
  if(x==1)
  {digitalWrite(12,HIGH);
       }
  else{digitalWrite(12,LOW);
      }     
  

}
