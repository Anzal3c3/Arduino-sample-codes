/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

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
{ Blynk.virtualWrite(V1, "hello");

}
BLYNK_READ(V2)
{ Blynk.virtualWrite(V2, millis() / 1000);
}

void setup()

{

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
}
