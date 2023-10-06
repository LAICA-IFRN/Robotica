//ponte H
#define pino_ena 4  // motor da direita F_AMARELO estao invertidos 
#define pino_enb 3  // motor da esquerda F_VERDE
#define in1 10   //pinmotor4 F_PRETO
#define in2 5   //pinmotor1 F_branco
#define in3 6    //pinmotor2 esquerdo frente F_CINZA
#define in4 11   //pinmotor3 direito frente F_ROXO

//Sensores
#define sensoresq_ 38
#define sensoresq 39
#define sensorcentro 40
#define sensordir 41
#define sensordir_ 42

//Ultra
#define eco 9
#define aci 8
unsigned int distancia = 10 ;
unsigned int duracao = 100;


bool estadoD, estadoD_, estadoE, estadoE_, estadoC;

//Laser
#include <Wire.h>
#include <VL53L0X.h>
#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
int media_laserUP;
int dist_laser_UP = 0;
int obs;
//unsigned int distancia = 10 ;
//unsigned int duracao = 100;
int vLado = 160;  //190 limite
int vLadoR = 220;
int accFrente = 120; // 95 minino = 135; max = 255  dt:13/9 
int accFrente_L = 85;
int accFrente_90 = 150;
int accTras = 900;
int ajDir = 7; // 43
int ajEsq = 0;
int incremento = 1;
const int threshold = 800;

void setup() {
  Serial.begin(9600);
  pinMode(eco, INPUT);
  pinMode(aci, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(sensoresq, INPUT);
  pinMode(sensordir, INPUT);
  pinMode(sensoresq_, INPUT);
  pinMode(sensordir_, INPUT);
  pinMode(sensorcentro, INPUT);
  pinMode(pino_ena, OUTPUT);
  pinMode(pino_enb, OUTPUT);

//laser
while (!Serial) {
  delay(1);
}
if (!lox.begin()) {
  Serial.println(F("Failed to boot VL53L0X"));
  while (1);
} else {
  Serial.println("BLZ");
  delay(500);
}

 
}


void loop() {
    
linha();

}




