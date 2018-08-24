
#include "IRBall.h"

using namespace RCJSMR;

IRBall::IRBall(uint8_t *pins, int *angles, int num) : _pins(pins), _angles(angles), _num(num)
{
  uint8_t *pin = _pins;
  int count = 0;
  do {
    pinMode(*pin, INPUT);
  } while (++pin, ++count != _num);
}

void IRBall::readEventRun()
{
  int *irValue = _irValues;
  int j = 0;
  do {
    uint8_t *pin = _pins;
    int i = 0;
    do {
      *irValue += digitalRead(*pin);
    } while (++pin, ++i != _num);
  } while (++irValue, ++j != 200);


  irValue = _irValues;
  int *angle = _angles;
  int count = 1;
  
  int minValue = *irValue;
  uint8_t minAngle = *angle;

  do {
    if (*irValue < minValue) {
      minValue = *irValue;
      minAngle = *angle;
    }
  } while (++irValue, ++angle, ++count != _num);

  _data = minAngle;
}

int IRBall::read()
{
  return _data;
}

