int TRIG = 3, ECHO = 2;
int led[] = {10,9,8,7,6,5};

const int conf[7][6] = {(0,0,0,0,0,0),
                  (1,0,0,0,0,0),
                  (1,1,0,0,0,0),
                  (1,1,1,0,0,0),
                  (1,1,1,1,0,0),
                  (1,1,1,1,1,0),
                  (1,1,1,1,1,1)};
                  
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
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[1][i]);
      }
    break;
    
    case 4:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[2][i]);
      }
    break;
    
    case 3:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[3][i]);
      }
    break;
    
    case 2:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[4][i]);
      }
    break;
    
    case 1:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[5][i]);
      }
    break;
    
    case 0:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[6][i]);
      }
    break;

    default:
      for(int i = 0; i < 6; i++){
        digitalWrite(led[i],conf[0][i]);
      }
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
