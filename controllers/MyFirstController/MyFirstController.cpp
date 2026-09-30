#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

#include <iostream>

const int TIME_STEP {64};
const double MAX_SPEED {6.28};

int main(int argc, char **argv) {
  webots::Robot robot {};
  
  webots::Motor* leftMotor {robot.getMotor("left wheel motor")};
  webots::Motor* rightMotor {robot.getMotor("right wheel motor")};
  
  leftMotor->setPosition(INFINITY);
  rightMotor->setPosition(INFINITY);
  
  leftMotor->setVelocity(0.1 * MAX_SPEED);
  rightMotor->setVelocity(-0.1 * MAX_SPEED);

  while (robot.step(TIME_STEP) != -1);

  return 0;
}