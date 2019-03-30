#include <Servo.h>
Servo myServo;

const int ledPin1 = 3;
const int ledPin2 = 5;
const int servoPin = 9;
const int piezo = A0;

const int quietKnock = 13;
const int loudKnock = 100;


int knockVal = 0;
int Interval = 5;
int counter = 0;
int numberOfKnocks = 0;

long preMillis = 0;
long preMillis2 = 0;
bool flipFlop = false;
bool trigger = false;


void setup() {

  myServo.attach(9);
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(servoPin, OUTPUT);
  pinMode(piezo, INPUT);

}


void loop() {

  knockVal = analogRead(piezo);
  Serial.print("knockVal: ");
  Serial.println(knockVal);
  
  analogWrite(ledPin1, counter);
  myServo.write(knockVal);



  if (knockVal > 50) {

    analogWrite(ledPin2, knockVal);
  } else {

    analogWrite(ledPin2, 0);
  }

  
  if (millis() - preMillis >= Interval) {
    preMillis = millis();
    if (flipFlop == false) {
      counter = counter + 1;

    } else {
      counter = counter - 1;
    }
  }



  if (counter >= 255) {
    flipFlop = true;
  }

  if (counter <= 0) {
    flipFlop = false;
  }
}
