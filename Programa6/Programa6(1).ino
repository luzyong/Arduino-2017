int leduno=12;
int leddos=13;
void setup() {
  // put your setup code here, to run once:
pinMode(leduno,OUTPUT);
pinMode(leddos,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(leduno,HIGH);
digitalWrite(leddos,LOW);
delay(500);
digitalWrite(leduno,LOW);
digitalWrite(leddos,HIGH);
delay(500);
}
