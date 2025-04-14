int x=5;
void setup() {
  Serial.begin (9600);

}

void loop() {
  Serial.print("x=");
  Serial.println(x);
 delay(10);
}
