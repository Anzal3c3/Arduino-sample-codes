
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int trigpin = D5, echopin = D6, distance; //connect tigger and echo pins in pwm 
long duration;
void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  lcd.init();
  lcd.backlight();


}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite (trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite (trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * .034 / 2;
  lcd.setCursor(0, 0);
  lcd.print("distance:");
  lcd.setCursor(0, 11);
  lcd.print(distance);
  delay(500);
  lcd.clear();



}
