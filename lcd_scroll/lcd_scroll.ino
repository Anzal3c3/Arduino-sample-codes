  #include<LiquidCrystal.h>
  LiquidCrystal lcd(12,11,5,4,3,2);//RS,E,D4,D5,D6,D7
  int i=0;
void setup() {  
  lcd.begin(16,2);
}
void loop() {
  for(i=0;i<=15;i++)
  {
  lcd.setCursor(i,0);
  lcd.print("Anzal");
  delay(100);
  lcd.clear();}
  for(i=16;i>=15;i--)
  {lcd.setCursor(i,1);
  lcd.print("nizam");
  delay(100);
  lcd.clear();
  }

}
