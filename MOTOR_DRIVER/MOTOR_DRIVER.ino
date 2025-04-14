#define A1 D3
#define A2 D4
#define B1 D7
#define B2 D8




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
forward();
delay(5000);
//backward();
//delay(5000);
//turnright();
//delay(5000);
//turnleft();
//delay(5000);
//halt();
//delay(5000);
}
