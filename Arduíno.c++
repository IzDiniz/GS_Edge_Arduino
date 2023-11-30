
//Definindo as entradas do Sensor Ultrassônico e do Buzzer/Piezo 
const int trig = 12;
const int echo = 13;
const int buzzer = 11;

//Entradas dos LED's
const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;
const int LED6 = 3;
const int LED7 = 2;

int duration = 0;
int distance = 0;


//Definindo PinMode, portas de Entrada ou Saída
void setup() 
{
  //Sensor Ultrassônico e Buzzer
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(buzzer, OUTPUT);
  
  //LED's, saídas
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  //Denifindo tempo de delay
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);

  //Calculando Distância e a Duração
  //Fazendo com que mostre o Valor no serial Number
  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
  
 
  //Definindo valores
  //Se a distância for maior ou menor que ... número, ocorre uma ação
  //Exemplo, LED, acende ou desliga, Buzzer apita ou não.
  if ( distance <= 10 )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 50 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 100 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 150 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 200 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 250 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 300 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
  if ( distance >= 300 )
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }
}