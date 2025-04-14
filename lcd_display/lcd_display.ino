
  #include<LiquidCrystal.h>
  LiquidCrystal lcd(12,11,5,4,3,2);//RS,E,D4,D5,D6,D7
void setup() {  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("hello world");
   delay(2000);
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print("www");
}

void loop() {
  
  lcd.setCursor(0,0);
  lcd.print("anzal");
  delay(2000);
  lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("viki");
  delay(2000);
  lcd.clear();
  

}
