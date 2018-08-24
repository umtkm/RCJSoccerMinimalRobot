
#include "Omni.h"

using namespace RCJSMR;

Omni::Omni(Motor *motors, int *angles, int num) : _motors(motors), _angles(angles), _num(num)
{
  
}

void Omni::move(int moveAngle, int speed, int fix)
{
  Motor *motor = _motors;
  int *angle = _angles;
  int count = 0;
  do {
    motor->spin( speed * sin( radians(moveAngle - *angle) ) + fix );
  } while (++motor, ++angle, ++count != _num);
}

