/*
  Fade (from http://arduino.cc/en/Tutorial/Fade )
  
  
*/

int enAPin = 5; // enA for L293D
int ledPin = 8; // in1 for L293D
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

void setup(){
  pinMode(ledPin, OUTPUT);  // declare pin 8 to be an output for LED
  pinMode(enAPin, OUTPUT);  // declare pin 5 to be an output for enable
  
  digitalWrite(enAPin, HIGH);  // Set enable
}

void loop(){
  // set the brightness of LED
  analogWrite(ledPin, brightness);
  
  brightness = brightness + fadeAmount;
  
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  
  delay(30);
}
