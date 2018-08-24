
#ifndef OMNI_H
#define OMNI_H

#include "arduino.h"

#include "Motor.h"

namespace RCJSMR {

  class Omni {
    
    Motor *_motors;
    int *_angles;
    int _num;
    
  public:

    Omni(Motor *motors, int *angles, int num);
    void move(int moveAngle, int speed, int fix);
    
  };
  
}

#endif
