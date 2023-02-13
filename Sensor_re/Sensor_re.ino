int TRIG = 3, ECHO = 2;
int led[] = {10,9,8,7,6,5};

void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  
  for(int i = 0; i < 6; i++){
  pinMode(led[i],OUTPUT);
  }
}

void loop() {
  int dis = sensor_morcego(TRIG,ECHO); // Chamada da função de leitura.
  int mapdis = map(dis, 10, 100, 0, 5);
  Serial.println(dis);

  switch(mapdis){
    case 5:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], LOW);
      digitalWrite(led[3], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], LOW);
    break;
    
    case 4:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[3], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], LOW);
    break;
    
    case 3:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[2], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], LOW);
    break;
    
    case 2:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], LOW);
    break;
    
    case 1:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[0], LOW);
    break;
    
    case 0:
      digitalWrite(led[5], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[0], HIGH);
    break;

    default:
      digitalWrite(led[5], LOW);
      digitalWrite(led[4], LOW);
      digitalWrite(led[3], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[0], LOW);
    break;
  }
}

int sensor_morcego(int pinotrig,int pinoecho){ // Função para leitura do sensor
  digitalWrite(pinotrig,LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig,LOW);

  return pulseIn(pinoecho,HIGH)/58;
}
