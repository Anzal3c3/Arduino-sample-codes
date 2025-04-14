int x,y,z,w;
boolean lastbutton1 = LOW,lastbutton2 = LOW,lastbutton3 = LOW,lastbutton4 = LOW;
boolean ledstate1 = LOW,ledstate2 = LOW,ledstate3 = LOW,ledstate4 = LOW;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  x=digitalRead(2);
  y=digitalRead(3);
  z=digitalRead(4);
  w=digitalRead(5);




  
  if (digitalRead(2) == HIGH && lastbutton1 == LOW)
  {
    ledstate1 = !ledstate1;
    lastbutton1 = HIGH;
    Serial.println("led 1 is on");
  }
  else
  {
    lastbutton1 = digitalRead(2);

  }
  digitalWrite(6, ledstate1);
  delay(25);


  if (digitalRead(3) == HIGH && lastbutton2 == LOW)
  {
    ledstate2 = !ledstate2;
    lastbutton2 = HIGH;
    Serial.println("led 2 is on");
  }
  else
  {
    lastbutton2 = digitalRead(3);

  }
  digitalWrite(7, ledstate2);
  delay(25);



  if (digitalRead(4) == HIGH && lastbutton3 == LOW)
  {
    ledstate3 = !ledstate3;
    lastbutton3 = HIGH;
    Serial.println("led 3 is on");
  }
  else
  {
    lastbutton3 = digitalRead(4);

  }
  digitalWrite(8, ledstate3);
  delay(25);


  if (digitalRead(5) == HIGH && lastbutton4 == LOW)
  {
    ledstate4 = !ledstate4;
    lastbutton4 = HIGH;
    Serial.println("led 4 is on");
  }
  else 
  {
    lastbutton4 = digitalRead(5);

  }
  digitalWrite(9, ledstate4);
  delay(25);

  
}
