const int ledPin1 = 3;

int tmpVal;
int counter = 0;
long preMillis = 0;

bool flipFlop = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
}


void loop() {

  analogWrite(ledPin1, counter);
  tmpVal = analogRead(A0);

  //checking (if 10 millis seconds have passed) per loop;
  //preMillis is a variable that always 10 millis delay compared with the variable millis(), except "that very point";

  int Interval = 170 - tmpVal;

  if (Interval < 1) {
    Interval = 1;
  }

  if (millis() - preMillis >= Interval) {
    preMillis = millis();
    if (flipFlop == false) {
      counter = counter + 1;

    } else {
      counter = counter - 1;
    }
  }

  //  Serial.println(counter);
  Serial.println(Interval);

  //limit is 255;
  //counter = counter +1;

  if (counter >= 255) {
    //  counter = 0;
    flipFlop = true;
  }

  if (counter <= 0) {
    flipFlop = false;
  }


  //  delay(10);
}
