int x=0;
void setup() {
   
   pinMode(7,OUTPUT);

}

void loop() {
  x=analogRead(A0);
  if(x<600)
  {digitalWrite(12,HIGH);
       }
  else{digitalWrite(12,LOW);
      }     
  

}
