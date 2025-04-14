int i,j;
void setup() {
  Serial.begin(9600);
 pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  for(i=0;i<=255;i+=10)
  {analogWrite(11,i);
  delay(20);
  Serial.println(i);
  }
  for(i=255;i>=0;i-=10)
  {analogWrite(11,i);
  delay(20);
  Serial.println(i);
  }
  for(j=0;j<=255;j+=10)
  {analogWrite(10,j);
  delay(20);
  Serial.println(j);
  }
  for(j=255;j>=0;j-=10)
  {analogWrite(10,j);
  delay(20);
  Serial.println(j);
  }
}
