  #include<LiquidCrystal.h>
  LiquidCrystal lcd(12,11,5,4,3,2);//RS,E,D4,D5,D6,D7
void setup() {  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("welcome");
  
}

void loop() {
  for(int i=0;i<=7;i++)
  {lcd.scrollDisplayLeft();
   delay(500);
    }
   for(int i=0;i<=23;i++)
  {lcd.scrollDisplayRight();
   delay(500);
    }  
 

}
