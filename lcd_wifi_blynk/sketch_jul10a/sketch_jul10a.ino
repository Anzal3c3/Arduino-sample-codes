#include<Servo.h>
Servo myservo;
int trigpin = D5, echopin = D6, distance; //connect trigger and echo pins in pwm
long duration;
#define A1 D3
#define A2 D4
#define B1 D7
#define B2 D8

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  myservo.attach(D2);
  myservo.write(90);
  delay(1000);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
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
  echo();

  if (distance > 30)
  {
    halt();
  }
  else
  { forward();
    delay(500);
    myservo.write(10);
    delay(1200);
    echo();
    int x = distance;
    myservo.write(170);
    delay(2500);
    echo();
    int y = distance;
    myservo.write(90);
    delay(1200);
    if (x < y)
    {
      turnleft();
      delay(1000);
    }
    if (x > y)
    { 
      turnright();
      delay(1000);
    }
  //  if (x>30 && y>30)
   // { 
     // backward();
     // delay(1000);
     // turnright();
      //delay(2500);
   // }

  }


}
