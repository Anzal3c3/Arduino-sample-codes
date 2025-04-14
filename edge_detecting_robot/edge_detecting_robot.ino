#define A1 D3
#define A2 D4
#define B1 D5
#define B2 D6
int trigpin = D2 , echopin = D7 , distance;
long duration;



void setup() {
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D7, INPUT);
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
void echo() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite (trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite (trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * .034 / 2;
}

void loop() {
  echo();

  if (distance < 10)
  { forward();
  }
  else if (distance > 10)
  {
    halt();
    delay(500);
    backward();
    delay(200);
    turnleft();
    delay(1200);
  }










}
