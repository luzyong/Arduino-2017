void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(250);
digitalWrite(12,HIGH);
delay(250);
digitalWrite(12,LOW);
}
