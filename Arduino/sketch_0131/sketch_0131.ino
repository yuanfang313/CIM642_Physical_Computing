

int button1 = 2;
int led1 = 11;


void setup() {
  // put your setup code here, to run once:

  
pinMode(2, INPUT);
pinMode(led1, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int button = digitalRead(button1);
//Serial.println("button1": + button1);

Serial.print("button1:");
Serial.println(button);
//Serial.print(button);
digitalWrite(led1, button);
}
