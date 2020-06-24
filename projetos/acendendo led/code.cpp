#include <Arduino.h>

int pinLed = 9;

void setup()
{
  //Pino 10 do arduino como saída
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  //Liga o pino 10 e acende o LED
  digitalWrite(pinLed, HIGH);

  //Aguarda 1000ms (ou 1 segundo)
  delay(1000);

  //Desliga o pino  10 e acende o LED
  digitalWrite(pinLed, LOW);

  //Aguarda 1000ms (ou 1 segundo)
  delay(1000);
}
