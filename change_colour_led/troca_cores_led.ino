const int BLUE = 9;
const int VERDE = 10;
const int VERMELHO = 11;

int i = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(BLUE, OUTPUT);
pinMode(VERDE, OUTPUT);
pinMode(VERMELHO, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:



for (i = 0; i< 255; i++){
analogWrite(BLUE, i);
analogWrite(VERMELHO, i);
delay(2);
}

for(i = 255; i > 0; i--){
 analogWrite(BLUE, i);
  analogWrite(VERMELHO, i);
  delay(2);
}

for (i = 0; i< 255; i++){
analogWrite(VERDE, i);
 analogWrite(BLUE, i);
delay(2);
}

for(i = 255; i > 0; i--){
  analogWrite(VERDE, i);
   analogWrite(BLUE, i);
  delay(2);
}

for (i = 0; i< 255; i++){
analogWrite(VERMELHO, i);
analogWrite(VERDE, i);
delay(2);
}

for(i = 255; i > 0; i--){
  analogWrite(VERMELHO, i);
  analogWrite(VERDE, i);
  delay(2);
}
}
