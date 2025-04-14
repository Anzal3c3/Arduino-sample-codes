int x=0;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
     
    x=analogRead(A0);
    Serial.print("Resistance value : ");
    Serial.println(x);
    x=map(x,0,1023,0,10000);
    Serial.print("Mapped value : ");
    Serial.println(x);
    delay (1000);
}
