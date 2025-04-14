int i=1;
void setup() {
  
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  
}
void loop()
{
  
  {
digitalWrite (13,  HIGH) ;
delay (i);
digitalWrite (13,  LOW);
delay(i);
digitalWrite (12, HIGH);
delay(i);
digitalWrite (12, LOW);
delay(i);
i++;
 }


  

}
