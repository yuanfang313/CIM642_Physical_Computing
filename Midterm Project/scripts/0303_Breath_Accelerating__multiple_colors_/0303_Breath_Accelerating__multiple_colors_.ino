const int ledPin1 = 3;
const int ledPin2 = 4;
const int ledPin3 = 7;
const int ledPin4 = 8;

int Interval = 0;
int Interval2 = 100;
int mapped = 0;


int tmpVal;
float photoVal;
int counter = 0;
long preMillis = 0;
long preMillis2 = 0;


bool flipFlop = false;
bool trigger = false;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

}


void loop() {

  analogWrite(ledPin1, counter);
  tmpVal = analogRead(A0);
  photoVal = analogRead(A2);


  //define Interval;
  Interval = 80 - mapped;
  mapped = map(tmpVal, 150, 170, 0, 100 );


  if (Interval < 1) {
    Interval = 1;
  }

  //--Breath Mode--// + //--Breath Accelerating Mode--//
  // timer1;

  if (millis() - preMillis >= Interval) {
    preMillis = millis();
    if (flipFlop == false) {
      counter = counter + 1;

    } else {
      counter = counter - 1;
    }
  }
  Serial.print(",mapped:");
  Serial.print(mapped);
  Serial.print(",Interval:");
  Serial.print(Interval);
  Serial.print(",tmpVal:");
  Serial.println(tmpVal);
  Serial.print("photoVal:");
  Serial.print(photoVal);

  // toggle timer1 with "dimmer";
  if (counter >= 255) {
    flipFlop = true;
  }

  if (counter <= 0) {
    flipFlop = false;
  }

  //--Multiple Colors Mode--//
  //the condition of timer2;
  //timer2;
  if (checkForInterval (Interval) == true) {
    if (millis() - preMillis2 >= Interval2) {
      preMillis2 = millis();
      if (trigger == false) {
        trigger = true;
      } else {
        trigger = false;
      }
    }
  }

  if (trigger == true) {
    digitalWrite (ledPin2, HIGH);
    digitalWrite (ledPin3, HIGH);
    digitalWrite (ledPin4, HIGH);
  } else if (trigger == false) {
    digitalWrite (ledPin2, LOW);
    digitalWrite (ledPin3, LOW);
    digitalWrite (ledPin4, LOW);

  }

}

boolean checkForInterval (int value) {
  if (value < 2 && value > 4 ) {
    return true;
  } else {
    return false;
  }

}
