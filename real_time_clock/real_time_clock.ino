#include<Wire.h>
#include<DS1307.h>
DS1307 rtc;
void setup() {
  pinMode(8,OUTPUT);
 Serial.begin(9600);
  rtc.set(50,33,6,15,7,2019);/*sec,min,hour,day,month,year*/
  //rtc.stop();
  /*to stop timer*/
  rtc.start();
  /*to start timer*/  
    

}
void alarm()
{digitalWrite(8,HIGH);
    delay(250);
    digitalWrite(8,LOW);
    
  }

void loop() {
  
  uint8_t sec,min,hour,day,month;
  uint16_t year;
  rtc.get(&sec,&min,&hour,&day,&month,&year);/*to get time from rtc*/
  Serial.print("Time:");
  Serial.print(hour,DEC);
  Serial.print(":");
  Serial.print(min,DEC);
  Serial.print(":");
  Serial.println(sec,DEC);
  Serial.print("Date:");
  Serial.print(day,DEC);
  Serial.print("/");
  Serial.print(month,DEC);
  Serial.print("/");
  Serial.print(year,DEC);
  delay(1000);
  if(hour==6&&min==34)
  { alarm();
    
  }

}
