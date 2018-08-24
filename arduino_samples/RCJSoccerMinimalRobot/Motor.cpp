
#include "Motor.h"

using namespace RCJSMR;

Motor::Motor(uint8_t inA, uint8_t inB, uint8_t pwm) : _inA(inA), _inB(inB), _pwm(pwm)
{   
    pinMode(inA, OUTPUT);
    pinMode(inB, OUTPUT);
    pinMode(pwm, OUTPUT);
}

Motor::spin(int speed) {
  if (speed > 0) {
    digitalWrite(_inA, HIGH);
    digitalWrite(_inB, LOW);
  } else if (speed < 0) {
    digitalWrite(_inA, LOW);
    digitalWrite(_inB, HIGH);
  } else {
    digitalWrite(_inA, LOW);
    digitalWrite(_inB, LOW);
  }
  analogWrite(_pwm, constrain(abs(speed), 0, 255) );
}

