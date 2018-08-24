
#include "Gyro.h"

using namespace RCJSMR;

Gyro::Gyro(HardwareSerial &gyro) : _gyro(gyro)
{
  
}

int Gyro::available()
{
  return _gyro.available();
}

int Gyro::read()
{
  return _gyro.read();
}

