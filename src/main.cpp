#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("Julia Norrish");
  Serial.println("00839030");

  Serial.println("Chip ID: " + String(ESP.getChipId()));
  Serial.println("Flash Chip ID: " + String(ESP.getFlashChipId()));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Time since created: " + String(millis()));
  delay(2000);
}