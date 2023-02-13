void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
}
