int i;
void setup() {
    pinMode(9,OUTPUT);

}

void loop() {
      
     tone(9,3000);
     delay(1000);
     noTone(9);
   
}
