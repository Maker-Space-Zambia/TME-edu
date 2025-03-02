#include <Arduino.h>  // Include the Arduino library

int led = 13;  // Define the pin number for the LED

void setup() {
  pinMode(led, OUTPUT);  // Set the LED pin as an output
}

void loop(){
    digitalWrite(led, HIGH);  // Turn the LED on
    delay(1000);  // Wait for 1 second
    digitalWrite(led, LOW);  // Turn the LED off
    delay(1000);  // Wait for 1 second
}