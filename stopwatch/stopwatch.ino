#include<Wire.h>
#include<DS1307.h>
boolean lastbutton = LOW;
boolean state = LOW;
DS1307 rtc;
void setup() {
    pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9,OUTPUT);
 Serial.begin(9600);
  rtc.set(0,0,0,0,0,0);/*sec,min,hour,day,month,year*/
  //rtc.stop();
  /*to stop timer*/
 
  /*to start timer*/  
    

}
void alarm()
{tone(9,2000);
 delay(225);
 noTone(9);
 delay(225);
 
 
}


void loop() {
    if (digitalRead(7) == HIGH && lastbutton == LOW)
  {
    state = !state;
    lastbutton = HIGH;
  }
  else
  {
    lastbutton=digitalRead(7);
  }
 
   if(state== 1)
   {
    rtc.start();
    alarm();
 
   }
  if(state==0)
  {
    rtc.stop();
    noTone(9);
  } 
  if(digitalRead(8)==HIGH)
  { 
    rtc.set(0,0,0,0,0,0);
   }
   
  uint8_t sec,min,hour,day,month;
  uint16_t year;
  rtc.get(&sec,&min,&hour,&day,&month,&year);/*to get time from rtc*/
  Serial.print("Time:");
  Serial.print(hour,DEC);
  Serial.print(":");
  Serial.print(min,DEC);
  Serial.print(":");
  Serial.println(sec,DEC);
  
 /* Serial.print("Date:");
  Serial.print(day,DEC);
  Serial.print("/");
  Serial.print(month,DEC);
  Serial.print("/");
  Serial.print(year,DEC);
  delay(1000);*/

}
