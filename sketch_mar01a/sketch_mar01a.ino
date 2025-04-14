void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);           

}
int x,y;

void loop() {
  x=analogRead(A0); //joystick
  x=map(x,0,1023,0,255); 
  analogWrite(9,x);
  y=analogRead(A1); //ldr
  y=map(y,629,1000,0,255);
    analogWrite(10,y);
}
