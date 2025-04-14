int state, laststate, count;
void setup() {
  pinMode(12, INPUT);
  pinMode(9, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(12);

  if (state != laststate)
  {
    count++;
    laststate = state;
    delay(25);
    Serial.println(count);
  }


  if (count > 0)
  {

    
    if (digitalRead(9) == HIGH)
    {
      int val = analogRead(A0);
      val=map(val,0,1023,255,0);
      analogWrite(5, val);
      Serial.println("pir");
    }
    else
    { digitalWrite(5, LOW);
    }

  }

}
