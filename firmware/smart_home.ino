
#define BLYNK_TEMPLATE_ID "TMPL2bU32ZWOL"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "u7p5qtH9gSBC2jZF0vcQfZdPy5Xkg6H5"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
float temp;
int tempPin = 36;   // pin connecté au capteur LM335
int relayPin = 13;  // pin connecté au relai
const float tensionDeCalage = 0.5;
const float coefficientTemperature = 0.01;



char auth[] = "u7p5qtH9gSBC2jZF0vcQfZdPy5Xkg6H5";
char ssid[] = "ENIG_ADM";
char pass[] = "********";




void setup()
{

  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  pinMode(tempPin, INPUT);
  pinMode(relayPin, OUTPUT);

}


BLYNK_WRITE(V0)
{
  int pinValue = param.asInt(); // Get value from Blynk app
  Serial.print("value "); Serial.println(pinValue);
  if (pinValue == 1)
  {
    digitalWrite(relayPin, HIGH); // Turn on the LED
  }
  else
  {
    digitalWrite(relayPin, LOW); // Turn off the LED
  }
}
BLYNK_WRITE(V2)
{
  int pinValue = param.asInt(); // Get value from Blynk app
  Serial.print("value "); Serial.println(pinValue);
  if (pinValue == 1)
  {
    if (temp > 35)
    {
      digitalWrite(relayPin, LOW);
    }
    else {
      digitalWrite(relayPin, HIGH);
    }
  }
  else
  {
    BLYNK_WRITE(V0);
  }
}
void loop() {
  Blynk.run();
  int valeurTension = analogRead(tempPin);

  // Conversion de la tension en température en degrés Celsius
  float tension = valeurTension * (2.5 / 4095);  // Conversion de la valeur analogique en tension
  float temperature = (tension - tensionDeCalage) / coefficientTemperature;
  float temp = temperature - 156;
  Serial.print("Température : ");
  Serial.print(temp);
  Serial.println(" °C");
  delay(1000);
  Blynk.virtualWrite(V1, temp);
  if (temp > 35)
  {
    Blynk.logEvent("temperature_alarme", "temperature est superieur a 35");
  }

}
