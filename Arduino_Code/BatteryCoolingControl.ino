// Include the OneWire and DallasTemperature libraries
#include <OneWire.h>

#include <DallasTemperature.h>
// Data wire is plugged into digital pin 2 on the Arduino
#define ONE_WIRE_BUS 2
// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);
// Pass the oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);
// Pin connected to relay module for controlling the water pump
int relayPin = 3;
// Set the temperature threshold at which the pump will turn on
int temperatureThreshold = 50;

29

void setup() {
// Start serial communication

Serial.begin(9600);
// Initialize the relay pin as an output
pinMode(relayPin, OUTPUT);
// Start the temperature sensor
sensors.begin();
}
void loop() {
// Call sensors.requestTemperatures() to issue a temperature request and
// send the temperature reading to the serial monitor
sensors.requestTemperatures();
float temperature = sensors.getTempCByIndex(0);
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println("C");
// If the temperature is above the threshold, turn on the water pump

30
if (temperature >= temperatureThreshold) {
digitalWrite(relayPin, HIGH);
Serial.println("Water pump turned on");
}
// Otherwise, turn off the water pump
else

{
digitalWrite(relayPin, LOW);
Serial.println("Water pump turned off");
}
// Wait for 1 second before taking the next temperature reading
delay(1000);
}
