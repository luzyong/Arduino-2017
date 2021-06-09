int push=11;
int led=10;
int prueba=0;
void setup() {
  // put your setup code here, to run once:
pinMode(push,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
prueba=digitalRead(push);
if(prueba==HIGH)
{digitalWrite(led,HIGH);
 delay(2000);
 digitalWrite(led,LOW);
}
}
