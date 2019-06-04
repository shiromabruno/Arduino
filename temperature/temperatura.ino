const  int LED = 13;
int val = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // configura comunicacao serial
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(1);
Serial.println(val);
digitalWrite(LED, HIGH);
delay(val);
digitalWrite(LED, LOW);
delay(val);
}
