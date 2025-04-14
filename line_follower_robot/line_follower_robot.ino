#define A1 D3
#define A2 D4
#define B1 D5
#define B2 D6
#define S2 D1 //*left
#define S3 D7 //*middle
#define S4 D8 //*right
int x;
int y;
int z;

void setup() {
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);

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
  int x = digitalRead(S2);
  int y = digitalRead(S3);
  int z = digitalRead(S4);
  if (x == HIGH && z == HIGH)
  { forward();
  }
  if (x == HIGH && z == LOW)
  { turnright();
    delay(175);
  }
  if (x == LOW && z == HIGH)
  { turnleft();
    delay(175);
  }
  if (x == LOW && z == LOW)
  { halt();
  }

}
