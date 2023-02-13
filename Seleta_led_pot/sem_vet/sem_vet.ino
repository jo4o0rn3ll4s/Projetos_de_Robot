int led_verd = 12, led_ama = 11, led_verm = 10, led_a = 9;
int pot = A4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_verd, OUTPUT);
  pinMode(led_ama, OUTPUT);
  pinMode(led_verm, OUTPUT);
  pinMode(led_a, OUTPUT);

  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valpot = map(analogRead(pot), 0, 1023, 1, 4);

  switch(valpot){
    case 1:
      digitalWrite(led_verd, HIGH);
      digitalWrite(led_ama, LOW);
      digitalWrite(led_verm, LOW);
      digitalWrite(led_a, LOW);
      delay(50);
      break;
    case 2:
      digitalWrite(led_verd, LOW);
      digitalWrite(led_ama, HIGH);
      digitalWrite(led_verm, LOW);
      digitalWrite(led_a, LOW);
      delay(50);
      break;
    case 3:
      digitalWrite(led_verd, LOW);
      digitalWrite(led_ama, LOW);
      digitalWrite(led_verm, HIGH);
      digitalWrite(led_a, LOW);
      delay(50);
      break;
    case 4:
      digitalWrite(led_verd, LOW);
      digitalWrite(led_ama, LOW);
      digitalWrite(led_verm, LOW);
      digitalWrite(led_a, HIGH);
      delay(50);
      break;
    delay(25);
  }
}
