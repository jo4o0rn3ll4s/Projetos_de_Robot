void setup() {
  // put your setup code here, to run once:
  pinMode(A4, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int brilho = 0;
  brilho = map(analogRead(A4),0, 1023, 0, 255);
  analogWrite(5, brilho);
  delay(250);
}
