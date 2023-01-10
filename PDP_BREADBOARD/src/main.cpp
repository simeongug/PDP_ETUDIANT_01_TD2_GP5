#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// Define the pins that we will use
#define SENSOR 33
#define LED 26
#define Type DHT11 // Type de capteur

DHT dht(SENSOR, Type);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  dht.begin();
}

void loop()
{
  // Effectuer une mesure toutes les 5s

  // Afficher l'humidité relative avec un peu de formatage

  // Afficher la température avec un peu de formatage

  delay(5000);
  float humidite = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("Humidité: ");
  Serial.println(humidite);
  Serial.print("Température:");
  Serial.println(temperature);
}