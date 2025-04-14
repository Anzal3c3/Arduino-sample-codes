 #include <LiquidCrystal_I2C.h>
 #include <Wire.h>
 LiquidCrystal_I2C lcd(0x27, 16,2);
void setup() {
   lcd.init();
   lcd.clear();
   lcd.setCursor(0,1);
   lcd.backlight();
   lcd.print("welcome");

}

void loop() {
  // put your main code here, to run repeatedly:

}
