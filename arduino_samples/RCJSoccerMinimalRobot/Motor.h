
#ifndef MOTOR_H
#define MOTOR_H

#include "arduino.h"

namespace RCJSMR {

  class Motor {
    
    uint8_t _inA;
    uint8_t _inB;
    uint8_t _pwm;
    
  public:

    Motor(uint8_t inA, uint8_t inB, uint8_t pwm);
    spin(int speed);
    
  };
  
}

#endif
