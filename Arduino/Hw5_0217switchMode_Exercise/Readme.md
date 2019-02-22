```
int switchRead = 0;
int counter = 0;

boolean wasPressed = false;
boolean trigger = false;

long prevMillis = 0;
int interval = 1000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  switchRead = digitalRead(2);
  Serial.print("  switch: ");
  Serial.println(switchRead);

  //digitalWrite(led1, HIGH);
  //digitalWrite(led2, HIGH);

  if (switchRead == HIGH) {

    wasPressed = true;
  }

  if (switchRead == LOW && wasPressed == true) {
    wasPressed = false;
    counter = counter + 1;
  }

  Serial.print(" counter: ");
  Serial.print(counter);

  if (counter == 0) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    trigger = false;

  } else if (counter == 1) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (counter == 2) {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    trigger = true;
  } else if (counter == 3) {

    if (millis() - prevMillis >= interval) {
      prevMillis = millis();
     digitalWrite(4, HIGH);
      } else { 
        digitalWrite (4, LOW);
      }
  } else {
    counter = 0;
  }

}


//  else if (counter == 3) {
//
//    if (millis() - prevMillis >= interval) {
//      prevMillis = millis();
//      if (trigger == false) {
//        trigger = true;
//      } else {
//        trigger = false;
//      }
//    }
//
//  } else {
//    counter = 0;
//  }
//
//
//  if (trigger == true) {
//    digitalWrite(4, HIGH);
//  } else {
//    digitalWrite(4, LOW);
//  }
```
