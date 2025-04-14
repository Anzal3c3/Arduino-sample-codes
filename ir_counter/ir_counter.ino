int state,laststate,count;
void setup() {
  pinMode(12,INPUT);
 Serial.begin(9600);
}

void loop() {
  state=digitalRead(12);
  
  if(state!=laststate)
  {
    count++;
  laststate=state;
  delay(25);
  Serial.println(count);
  
  }

}
