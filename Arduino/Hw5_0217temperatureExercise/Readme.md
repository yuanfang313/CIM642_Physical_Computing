```
void setup() {
Serial.begin(9600);
}
fail save thing;

void loop() {
float tempRead = (analog(A0)/1024.0 * 5);
float curTemp =(tempRead);

Serial.println(curTemp);
}
```
