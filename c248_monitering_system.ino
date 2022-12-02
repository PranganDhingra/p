#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup() {
Serial.begin(9600);
if (!bmp.begin()){
  Serial.println("could not found bmp180");
  while(1){
    }
  }
}

void loop() {
 Serial.print("temperature= ");
 Serial.print(bmp.readTemperature());
 Serial.println(" °C");

 Serial.print("pressure= ");
 Serial.print(bmp.readPressure());
 Serial.println(" Pa");

 Serial.println();
 delay(500);
}
