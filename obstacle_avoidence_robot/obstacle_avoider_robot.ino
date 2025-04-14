#define A1 D3
#define A2 D4
#define B1 D5
#define B2 D6




void setup() {
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(D0,INPUT);//right
  pinMode(D1,INPUT);//left
}
void forward()
{
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);

}
void backward()
{ digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);

}
void turnright()
{ digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
}
void turnleft()
{ digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);

}
void halt()
{ digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);

}

void loop() {
  if (digitalRead(D1 == HIGH) && digitalRead(D0 == HIGH))
  {
    forward();
  }
   if (digitalRead(D1 == LOW) && digitalRead(D0 == HIGH))
  { turnright();
    delay(500);
  }
   if (digitalRead(D1 == HIGH) && digitalRead(D0 == LOW))

  { turnleft();
    delay(500);
  }
  if (digitalRead(D1==LOW) && digitalRead(D0==LOW))
  { halt();
    turnright();
    delay(1000);
  }
}
