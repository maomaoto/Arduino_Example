int ledPin = 13;  // 
int enAPin = 5; // enA for L293D
int in1Pin = 8; // in1 for L293D

void setup(){
    pinMode(ledPin, OUTPUT);  //Set as output state
    pinMode(enAPin, OUTPUT);  // Set enA as output pin
    pinMode(in1Pin, OUTPUT);  // Set in 1 pin

    digitalWrite(enAPin, HIGH);  // Set enA
}

void loop(){
    digitalWrite(ledPin, HIGH);
    digitalWrite(in1Pin, HIGH);
    delay(1000);
    
    digitalWrite(ledPin, LOW);
    digitalWrite(in1Pin, LOW);
    delay(1000);
    
}
