
#include "RCJSMR.h"

using namespace RCJSMR;

uint8_t irPins[] = {A0, A1, A2, A3};
int irAngles[] = {0, 90, 180, -90};

IRBall ir(irPins, irAngles, sizeof(irPins));

Motor motors[] = {
  Motor(1, 2, 3),
  Motor(4, 5, 6),
  Motor(7, 8, 9),
  Motor(10, 11, 12)
};

int motorAngles[] = {
  45,
  135,
  -135,
  -45
};

Omni omni(motors, motorAngles, sizeof(motors));

void setup() {
  
}

void loop() {
  motors[0].spin(100);
  motors[1].spin(100);
  motors[2].spin(100);
  motors[3].spin(100);
}
