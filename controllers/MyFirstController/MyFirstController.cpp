#include <webots/Robot.hpp>
#include <webots/Motor.hpp>


using namespace webots;


int main(int argc, char **argv) {
  webots::Robot robot {};
  
  webots::Motor* leftMotor{robot.getMotor("left wheel motor")};
 

  return 0;
}
