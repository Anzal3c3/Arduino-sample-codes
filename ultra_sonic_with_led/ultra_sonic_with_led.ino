int trigpin = 5, echopin = 6, distance, x;
long duration;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite (trigpin, HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echopin, HIGH);
  distance = duration * .034 / 2;
  Serial.println(distance);
  if (distance <= 20)
  { x = map(distance, 2, 20, 255, 0);
    analogWrite(9, x);
  }
  else
  { digitalWrite(9, 0);
  }

}
