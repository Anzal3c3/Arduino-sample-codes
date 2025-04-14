/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define A1 D3
#define A2 D4
#define B1 D5
#define B2 D6

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "d21a1241445e41e48e267514bb5f0b50";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "RONNIN";
char pass[] = "0123456789";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
BLYNK_WRITE(V1)
{
  int pinValue1 = param.asInt();
  if (pinValue1 == 1)
  {
    forward();
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
  }
  else
  { halt();
  }
}
BLYNK_WRITE(V3)
{ int pinValue3 = param.asInt();
  if (pinValue3 == 1)
  { backward();
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

void setup()

{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
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

void loop()
{
  Blynk.run();
}
