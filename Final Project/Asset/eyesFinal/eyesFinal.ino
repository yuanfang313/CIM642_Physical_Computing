/***************************************************
  This is an example for our Adafruit 16-channel PWM & Servo driver
  Servo test - this will drive 8 servos, one after the other on the
  first 8 pins of the PCA9685

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/products/815

  These drivers use I2C to communicate, 2 pins are required to
  interface.

  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address and I2C interface
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(&Wire, 0x40);

// Depending on your servo make, the pulse width min and max may vary, you
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)

// our servo # counter
uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm.begin();

  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  delay(10);

}



void loop() {

  int joyX = analogRead(A0);
  int joyY = analogRead(A1);


  //int degree = 45;
  int degreeX = map(joyX, 0, 1023, 120, 0);
  int degreeY = map(joyY, 0, 1023, 0, 100);


  Serial.print("X:");
  Serial.print(joyX);
  Serial.print(",degreeX--");
  Serial.print(degreeX);

  Serial.print(",Y:");
  Serial.print(joyY);
  Serial.print(",degreeY--");
  Serial.println(degreeY);

  //setServo(SERVONUMBER, DEGREE)
  setServo(4, degreeX);
  setServo(0, degreeY);
  setServo(15, degreeY);

  if (digitalRead(12) == LOW) {

    setServo(9, 20);
    setServo(12, 0);

  } else {
    setServo(9, 90);
    setServo(12, 70);
  }





  //       pulselength = map(degree, 0, 180, SERVOMIN, SERVOMAX);
  //
  //      pwm.setPWM(servonum, 0, pulselength);
  //
  //    delay(1000);


}

void setServo(int servoNum, int degree) {
  int pulselength = map(degree, 0, 180, SERVOMIN, SERVOMAX);
  pwm.setPWM(servoNum, 0, pulselength);
}
