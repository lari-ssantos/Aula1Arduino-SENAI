//PROJETO 1: PISCA LED

/*
NOME: Larissa Santos
DATA: 14/08/2026
VER: 1.0
OBS: Este programa faz o Arduino Uno ligar e desligar (piscar) o pino 8, na qual um LED está conectado com CARGA!!!!!

*/

// LISTA DE APELIDOS
#define LED01	8
#define LED02	7

void setup()
{
  //congigura pinos 8 e 7 como saída
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);
}

void loop()
{
  //liga (HIGH) pino 8
  digitalWrite (LED01 , HIGH);
  
  //Aguarda 1 SEGUNDO (1000ms)
  delay (250);
    
  //Desliga (LOW) o pino 8
   digitalWrite (LED01 , LOW);
  
  //Aguarda 1 segundo (1000ms)
  delay (250);
  
  //liga (HIGH) pino 7
  digitalWrite (LED02 , HIGH);
  
  //Aguarda 1 SEGUNDO (1000ms)
  delay (250);
    
  //Desliga (LOW) o pino 7
   digitalWrite (LED02 , LOW);
  
  //Aguarda 1 segundo (1000ms)
  delay (250);
}