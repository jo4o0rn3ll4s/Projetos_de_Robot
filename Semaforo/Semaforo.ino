//Carros
#define verC 8
#define amaC 9
#define vedC 10
//Pedestres
#define verP 11
#define vedP 12

int temp = 3000;

void setup() {
  // put your setup code here, to run once:
 pinMode(verC, OUTPUT);
 pinMode(amaC, OUTPUT);
 pinMode(vedC, OUTPUT);

 pinMode(verP, OUTPUT);
 pinMode(vedP, OUTPUT);
 
 digitalWrite(verC,LOW);
 digitalWrite(amaC,LOW);
 digitalWrite(vedC,LOW);

 digitalWrite(verP,LOW);
 digitalWrite(vedP,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
 //Semaforo aberto aos carros, fechado aos pedestres
 digitalWrite(verC,LOW);
 digitalWrite(amaC,LOW);
 digitalWrite(vedC,HIGH);

 digitalWrite(verP,HIGH);
 digitalWrite(vedP,LOW);
 delay(temp);
 //Semaforo fechando aos carros, fechado aos pedestres
 digitalWrite(verC,LOW);
 digitalWrite(amaC,HIGH);
 digitalWrite(vedC,LOW);

 digitalWrite(verP,HIGH);
 digitalWrite(vedP,LOW);
 delay(temp/2);
 //Semaforo fechado aos carros, aberto aos pedestres
 digitalWrite(verC,HIGH);
 digitalWrite(amaC,LOW);
 digitalWrite(vedC,LOW);

 digitalWrite(verP,LOW);
 digitalWrite(vedP,HIGH);
 delay(temp);
 //Semaforo fechado aos carros, fechando aos pedestres
 digitalWrite(verC,HIGH);
 digitalWrite(amaC,LOW);
 digitalWrite(vedC,LOW);

 digitalWrite(verP,LOW);
 digitalWrite(vedP,HIGH);
 delay(temp/6);
 digitalWrite(vedP,LOW);
 delay(temp/6);
 digitalWrite(vedP,HIGH);
 delay(temp/6);
 digitalWrite(vedP,LOW);
 delay(temp/6);
 digitalWrite(vedP,HIGH);
 delay(temp/6);
 digitalWrite(vedP,LOW);
 delay(temp/6);
}
