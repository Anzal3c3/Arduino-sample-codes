int x , p, q, r, s;
boolean ledstate1 = LOW, ledstate2 = LOW, ledstate3 = LOW, ledstate4 = LOW;
boolean lastbutton1 = LOW, lastbutton2 = LOW, lastbutton3 = LOW, lastbutton4 = LOW;
void setup() {
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop() {
 /* p = digitalRead(6 == HIGH);
  q = digitalRead(7 == HIGH);
  r = digitalRead(8 == HIGH);
  s = digitalRead(9 == HIGH);
  /*   if (digitalRead(6) == HIGH && lastbutton1 == LOW)//1
    {
     ledstate1 = !ledstate1;
     lastbutton1 = HIGH;
    }
    else
    {
     lastbutton1 = digitalRead(6);

    }
    digitalWrite(x, ledstate1);
    delay(25);

     if (digitalRead(7) == HIGH && lastbutton2 == LOW)//2
    {
     ledstate2 = !ledstate2;
     lastbutton2 = HIGH;
    }
    else
    {
     lastbutton2 = digitalRead(7);

    }
    digitalWrite(x, ledstate2);
    delay(25);

    if (digitalRead(8) == HIGH && lastbutton3 == LOW)//3
    {
     ledstate3 = !ledstate3;
     lastbutton3= HIGH;
    }
    else
    {
     lastbutton3 = digitalRead(8);

    }
    digitalWrite(x, ledstate3);
    delay(25);

     if (digitalRead(9) == HIGH && lastbutton4 == LOW)//4
    {
     ledstate4 = !ledstate4;
     lastbutton4 = HIGH;
    }
    else
    {
     lastbutton4 = digitalRead(9);

    }
    digitalWrite(x, ledstate4);
    delay(25);*/

  if (digitalRead(6 == HIGH) &&  digitalRead(7 == HIGH) &&  digitalRead(8 == HIGH) && digitalRead(9 == HIGH))
  { Serial.println ("access granted");
  }
  else
  { Serial.println("access denied");
  }


}
