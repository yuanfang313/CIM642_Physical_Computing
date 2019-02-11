//----1 digitalWrite----//
//int ledPin1 = 10;
//int ledPin2 = 11;
//
//
//void setup() {
//  // put your setup code here, to run once:
//
//  Serial.begin(9600);
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//
//
//}
//void loop() {
//  // put your main code here, to run repeatedly:
//  digitalWrite(ledPin1, HIGH);
//  digitalWrite(ledPin2, LOW);
//
//  Serial.println(ledPin1);
//}


//----2 analogWrite----//
//
//int ledPin1 = 10;
//int ledPin2 = 11;
//
//void setup() {
//
//  Serial.begin(9600);
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//
//}
//
//void loop() {
//
//    analogWrite(ledPin1, 64);
//    analogWrite(ledPin2, 255);
//
//    Serial.println(ledPin1);
//  }

//----3 analogRead----//
//int ledPin1 = 10;
//int ledPin2 = 11;
//
//int port1 = A0;
//int portRead = 0;
//
//
// void setup(){
//
//  Serial.begin(9600);
// pinMode(ledPin1, OUTPUT);
// pinMode(ledPin2, OUTPUT);
// pinMode(port1, INPUT);
//
// }
//
// void loop(){
//portRead = analogRead(port1);
//int mapped = map(portRead,0, 1023, 0, 255);
//
//analogWrite(ledPin1, mapped);
//
//Serial.println(mapped);
//
// }

//----4 analogRead_different interpretation----//
//int ledPin1 = 10;
//int ledPin2 = 11;
//
//int port1 = A0;
//int portRead = 0;
//
//
//void setup() {
//
//  Serial.begin(9600);
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(port1, INPUT);
//
//}
//
//void loop() {
//  portRead = analogRead(port1);
//
//
//if(portRead < 512){
//analogWrite(ledPin1, 5);
//analogWrite(ledPin2, 0);
//  } else{
//    analogWrite(ledPin2, 255);
//    analogWrite(ledPin1, 0);
//
//    }
//
//  Serial.println(portRead);
//
//}
//

//----5 digitalRead_different interpretation----//




void setup() {

  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
  int lightRead = analogRead(A0);


  if (lightRead < 300) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);

  }

  Serial.println(lightRead);

}
