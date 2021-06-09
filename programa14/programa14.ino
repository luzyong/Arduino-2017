int ledu=11;
int ledd=12;
int push=10;
int prueba=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(ledu,OUTPUT);
 pinMode(ledd,OUTPUT);
 pinMode(push,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
prueba=digitalRead(push);
 if(prueba==HIGH)
 {digitalWrite(ledu,HIGH);
  digitalWrite(ledd,HIGH);
 }
}
