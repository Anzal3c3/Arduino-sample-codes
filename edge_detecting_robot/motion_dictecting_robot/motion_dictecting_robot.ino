void setup() {
  pinMode(9,INPUT);
  pinMode(5,OUTPUT);
}

void loop() 
{ int x=digitalRead(9);
  if(x==HIGH)
{digitalWrite(5,HIGH);
 
  }
 else
 {digitalWrite(5,LOW);
  } 

}
