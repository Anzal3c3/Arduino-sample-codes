
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2)==HIGH )
  { digitalWrite(6,HIGH );
  }
  else
  { digitalWrite(6, LOW);
  }
  if (digitalRead(3)== HIGH)
  { digitalWrite(7, HIGH);
  }
  else
  { digitalWrite(7, LOW);
  }

  if (digitalRead(4)== HIGH)
  { digitalWrite(8, HIGH);
  }
  else
  { digitalWrite(8, LOW);
  }
  if (digitalRead(5)== HIGH)
  { digitalWrite(9, HIGH);
  }
  else
  { digitalWrite(9, LOW);
  }








}
