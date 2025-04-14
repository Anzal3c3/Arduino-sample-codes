int trigpin = 5, echopin = 6, distance; //connect tigger and echo pins in pwm
long duration;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
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

}
