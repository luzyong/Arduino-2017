int prueba=0;
int push=11;
int led=10;
int suma=0;
void setup() {
  // put your setup code here, to run once:
pinMode(push,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
prueba=digitalRead(push);
if(prueba==HIGH)
{ suma=suma+1;}
if(suma==1)
{digitalWrite(led,HIGH);}
if(suma==2)
{digitalWrite(led,LOW);
 suma=0;
 }
 
  

}
