
#ifndef IRBALL_H
#define IRBALL_H

#include "arduino.h"

namespace RCJSMR {

  class IRBall {

    uint8_t *_pins;
    int *_angles;
    int _num;

    int _data;
    int _irValues[1024];

  public:

    IRBall(uint8_t *pins, int *angles, int num);
    void readEventRun();
    int read();
    
    
  };
  
}

#endif
