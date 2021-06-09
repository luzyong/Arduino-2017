
int push=12;
int led=13;
int prueba=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(push,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 prueba= digitalRead(push);
if(prueba==HIGH)
 { digitalWrite(led,HIGH);
 }
     
}
