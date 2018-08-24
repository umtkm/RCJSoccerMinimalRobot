
#ifndef GYRO_H
#define GYRO_H

#include "arduino.h"

namespace RCJSMR {

  class Gyro {

    HardwareSerial &_gyro;

  public:

    Gyro(HardwareSerial &gyro);
    int available();
    int read();
    
  };
  
}

#endif
