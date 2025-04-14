/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define A1 D3
#define A2 D4
#define B1 D7
#define B2 D8
int trigpin = D2 , echopin = D5 , distance;
long duration;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "d21a1241445e41e48e267514bb5f0b50";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "RONNIN";
char pass[] = "0123456789";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
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
void forward()
{
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);

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

void autonomous()
{ if (digitalRead(D1 == HIGH) && digitalRead(D0 == HIGH))
  {
    backward();
  }
  if (digitalRead(D1 == LOW) && digitalRead(D0 == HIGH))
  { turnleft();
    delay(500);
  }
  if (digitalRead(D1 == HIGH) && digitalRead(D0 == LOW))

  { turnright();
    delay(500);
  }
  if (digitalRead(D1 == LOW) && digitalRead(D0 == LOW))
  { halt();
    turnright();
    delay(1000);
  }
  echo();
  if (distance > 10)
  {
    halt();
    delay(500);
    forward();
    delay(200);
    turnleft();
    delay(1200);
  }


}

while (pinValue5 == 0)
{ BLYNK_WRITE(V1)
  {
    int pinValue1 = param.asInt();
    if (pinValue1 == 1)
    {
      forward();
      echo();
    }
    else
    {
      halt();
    }


  }
  BLYNK_WRITE(V2)
  {
    int pinValue2 = param.asInt();
    if (pinValue2 == 1)
    { turnright();
      echo();
    }
    else
    { halt();
    }
  }
  BLYNK_WRITE(V3)
  { int pinValue3 = param.asInt();
    echo();
    if (pinValue3 == 1)
    { echo();
      backward();
      Serial.print(distance);
      if (distance > 10)
      {

        halt();
      }
    }
    else
    { halt();
    }
  }
  BLYNK_WRITE(V4)
  { int pinValue4 = param.asInt();
    if (pinValue4 == 1)
    { turnleft();
    }
    else
    { halt();
    }
  }
}
BLYNK_WRITE(V5)
{ int pinValue5 = param.asInt();
  if (pinValue5 == 1)
  {
    autonomous();
  }


}


void setup()

{
  pinMode(D2, OUTPUT);
  pinMode(D5, INPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(D0, INPUT); //right
  pinMode(D1, INPUT); //left
  // Debug console

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100),
}
void loop()
{
  Blynk.run();
}
