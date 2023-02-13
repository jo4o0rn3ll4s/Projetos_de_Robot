int ld[] = {12, 11, 10, 9};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 4; i++){ //laço declarando todos os leds
    pinMode(ld[i], OUTPUT);   //como output e forçando todos a desligado
    digitalWrite(ld[i], LOW);
  }
  pinMode(A4, INPUT);         //declara pino do potenciometro como entrada
}

void loop() {
  // put your main code here, to run repeatedly:
  int pt = map(analogRead(A4), 0, 1023, 0, 3);
 
  digitalWrite(ld[pt], HIGH);
  delay(10);
  digitalWrite(ld[pt], LOW);
}
