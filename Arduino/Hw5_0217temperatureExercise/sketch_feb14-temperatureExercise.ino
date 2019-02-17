void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
fail save thing;
void loop() {
  // put your main code here, to run repeatedly:
float tempRead = (analog(A0)/1024.0 * 5);
float curTemp =(tempRead);

Serial.println(curTemp);
}
