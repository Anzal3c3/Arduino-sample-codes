#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
int   trigpin = 5, echopin = 6, distance, x;
long duration;
int count = 0;
void setup() {
  lcd.init();
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.backlight();
  pinMode(8, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  if (digitalRead(8) == HIGH){
    count=1;
  }
while(count)
  {
    lcd.setCursor(0, 0);
    lcd.println("reverse gear on");
    //delay(x);
    //lcd.clear();

    digitalWrite(trigpin, LOW);
    delayMicroseconds(2);
    digitalWrite (trigpin, HIGH);
    delayMicroseconds(10);
    duration = pulseIn(echopin, HIGH);
    distance = duration * .034 / 2;
    lcd.setCursor(0, 1);
    lcd.println(distance);
   // Serial.println(distance);
    if (distance <= 50)
    { 
      
      x = map(distance, 0, 50, 0, 255);
      digitalWrite(9, HIGH);
      delay(x);
      digitalWrite(9, LOW);
      delay(x);
      if (distance < 50 )
      { digitalWrite(2, HIGH);
      Serial.println("1");
      }
      
     else if (distance >40 )
      { digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
      Serial.println("2");
      } 
     else if (distance > 30)
      { digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        Serial.println("3");
      }

     else if (distance > 20)
      { digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(7, HIGH);
        Serial.println("4");
      }
      else {
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
      }
    }


  }


}
