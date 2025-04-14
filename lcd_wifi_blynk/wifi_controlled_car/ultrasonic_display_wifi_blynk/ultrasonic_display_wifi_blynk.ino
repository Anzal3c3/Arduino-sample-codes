/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
int trigpin = D5, echopin = D6, distance; //connect tigger and echo pins in pwm
long duration;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = " NlzaF0eoWhiOts6WWIZY7ZQVNnk_R4Lp";



// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "RONNIN";
char pass[] = "0123456789";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
BLYNK_READ(V1)
{ Blynk.virtualWrite(V1, "waterlevel");

}
BLYNK_READ(V2)
{ if (distance > 20)
  {
    Blynk.virtualWrite(V2, "empty" );
  }
  if (distance < 20 && distance > 10)
  {
    Blynk.virtualWrite(V2, "medium" );
  }
  if (distance < 5)
  {
    Blynk.virtualWrite(V2, "full" );
  }
}
void echo()
{ digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite (trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite (trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * .034 / 2;
}

void setup()

{
  pinMode(D5, OUTPUT);
  pinMode(D6, INPUT);

  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
  echo();
}
