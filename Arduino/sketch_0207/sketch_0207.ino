int ledPin1 = 10;
int ledPin2 = 11;

int port1 = A0;
int portRead = 0;


void setup() {
  // put your setup code here, to run once:
  // 9600--the speed limit, port rate(端口速度)，the speed of the communication between computer and arduino;

  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(port1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //digitalWrite(ledPin1,HIGH);
  //digitalWrite(ledPin2,HIGH);
  //0 = off, 255 = full brightness;
  //analogWrite(ledPin1,50);
  //analogWrite(ledPin2,255);

  //mapping method 1#
  //  potRead = analogRead(pot1)/4;

  portRead = analogRead(port1);
  //int mapped = map(portRead, 10, 700,0,255);
  int mapped = map(portRead, 0, 1023, 0, 255);

  Serial.println(mapped);

  //  analogWrite(ledPin1, potRead);
  analogWrite(ledPin1, mapped);

  //  if (potRead < 512) {
  //
  //    analogWrite(ledPin1, 5);
  //    analogWrite(ledPin2, 0);
  //  }
  //  else {
  //    analogWrite(ledPin2, 255);
  //    analogWrite(ledPin1, 0);
  //
  //  }


}
