#define vary A1
#define varx A0

#define p1 9
#define p2 8
#define p3 7
#define p4 6

void setup() {
  //pinos do joystick
  pinMode(vary, INPUT);
  pinMode(varx, INPUT);
  //saidas do arduino pro Ht12
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
  //set pra +5v na protoboard
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  //set para vcc e gnd no joystick
  pinMode(15, OUTPUT);
  digitalWrite(15, HIGH);
  pinMode(14, OUTPUT);
  digitalWrite(14, LOW);
  
  Serial.begin(9600);
}

void loop() {
  
  int ly = map(analogRead(vary), 0,1023,-90,90);
  int lx = map(analogRead(varx), 0,1023,-90,90);
/*
  Serial.print("val ly: ");
  Serial.println(ly);
  Serial.print("val lx: ");
  Serial.println(lx);

  delay(500);

*/
  if(lx > 30){  //esquerda
    digitalWrite(p2, HIGH);
    //digitalWrite(p3, HIGH);
    delay(10);
  }
  if(lx < -30){ //direita
    //digitalWrite(p1, HIGH);
    digitalWrite(p4, HIGH);
    delay(10);
  }
  if(ly > 30){  //frente
    digitalWrite(p4, HIGH);
    digitalWrite(p2, HIGH);
    delay(10);
  }
  if(ly < -30){  //tras
    digitalWrite(p1, HIGH);
    digitalWrite(p3, HIGH);
    delay(10);
  }
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
}
