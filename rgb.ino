#include <Arduino.h>

int red = 9;  // Define the pin number for the red LED
int green = 10;  // Define the pin number for the green LED
int blue = 11;  // Define the pin number for the blue LED

/*
void red_led();  // Declare the red LED function
void green_led();  // Declare the green LED function
void blue_led();  // Declare the blue LED function
*/

void setup() {
  pinMode(red, OUTPUT);  // Set the red LED pin as an output
  pinMode(green, OUTPUT);  // Set the green LED pin as an output
  pinMode(blue, OUTPUT);  // Set the blue LED pin as an output
}

void loop(){
    analogWrite(red, HIGH);  // Turn the red LED on
    analogWrite(green, LOW);  // Turn the green LED off
    analogWrite(blue, LOW);  // Turn the blue LED off
    delay(1000);  // Wait for 1 second

    analogWrite(red, LOW);  // Turn the red LED off
    analogWrite(green, HIGH);  // Turn the green LED on
    analogWrite(blue, LOW);  // Turn the blue LED off
    delay(1000);  // Wait for 1 second

    analogWrite(red, LOW);  // Turn the red LED off
    analogWrite(green, LOW);  // Turn the green LED off
    analogWrite(blue, HIGH);  // Turn the blue LED on
    delay(1000);  // Wait for 1 second

/*
    red_led();  // Call the red LED function
    delay(1000);  // Wait for 1 second  
    green_led();  // Call the green LED function
    delay(1000);  // Wait for 1 second
    blue_led();  // Call the blue LED function
    delay(1000);  // Wait for 1 second
*/

}

/*
void red_led(){
    analogWrite(red, HIGH);  // Turn the red LED on
    analogWrite(green, LOW);  // Turn the green LED off
    analogWrite(blue, LOW);  // Turn the blue LED off
}

void green_led(){
    analogWrite(red, LOW);  // Turn the red LED off
    analogWrite(green, HIGH);  // Turn the green LED on
    analogWrite(blue, LOW);  // Turn the blue LED off
}

void blue_led(){
    analogWrite(red, LOW);  // Turn the red LED off
    analogWrite(green, LOW);  // Turn the green LED off
    analogWrite(blue, HIGH);  // Turn the blue LED on
}
*/
