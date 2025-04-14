
boolean lastbutton = LOW;
int i = 0,x;
void setup() {
  pinMode(7, INPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  if (digitalRead(7) == HIGH && lastbutton == LOW)
  {
    i =i+51*x ;
    lastbutton= HIGH;
    if(i==255)
    {x=-1;}
   if (i==0)  
    {x=1;}
  }
  else 
  {
   lastbutton=digitalRead(7);

  }
  analogWrite(6, i);
  


}


















/*int i=0,lastbutton;
void setup() {
     pinMode(5,OUTPUT);
     pinMode(6,INPUT);
   Serial.begin(9600);  

}

void loop() {
      if (digitalRead(5) == HIGH && lastbutton == LOW)
      {i=i+51;
        }
     else
     {lastbutton = digitalRead(5);
      }
      
  
}*/
