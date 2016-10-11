/*
   19/07/2016
   Jose Maria Cesario Jr
   Exemplo BMP180
   Hardware: Arduino UNO + sensor BMP180

   Logica:
   1. inicializa o sensor BMP180
   2. obtem as grandezas de temperatura, pressao e altitude do sensor BMP180
   3. imprime os valores obtidos no passo 2 no console serial

*/
#include <Wire.h>
#include <Adafruit_BMP085.h>
Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando sensor BMP180...");
  if (!bmp.begin())
  {
    Serial.println("BMP180 nao encontrado. Verifique a conexao do sensor BMP180 e reinicialize o Arduino.");
    while (1) {}
  }
}

void loop() {

  Serial.print("Pressao: ");
  Serial.print(bmp.readPressure());
  Serial.print(" Pa / ");

  //Calcula a altitude utilizando a pressao barometrica padrao
  // de 1013.25 milibar = 101325 Pascal
  Serial.print("Altitude: ");
  Serial.print(bmp.readAltitude());
  Serial.print(" m / ");

  Serial.print("Temperatura: ");
  Serial.print(bmp.readTemperature());
  Serial.println(" C");
  delay(5000);
}



