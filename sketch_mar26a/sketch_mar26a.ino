int   trigpin = 5, echopin = 6, distance, x;
long duration;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
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
  if (distance <= 30)
  { x = map(distance, 0, 40, 0, 255);
    digitalWrite(9, HIGH);
    delay(x);
    digitalWrite(9, LOW);
    delay(x);
    if (distance <= 40)
    { digitalWrite(2, HIGH);
    }
    else
    {digitalWrite(2, LOW);
      }
     if (distance <= 30)
    { digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
    }
    else
    {digitalWrite(2, LOW);
     digitalWrite(3, LOW);
    }
     if (distance <= 20)
    { digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    else
    {digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      }
    
     if (distance <= 10)
    { digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
    }
    else {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(7, LOW);
    }
  
  
  }
}
