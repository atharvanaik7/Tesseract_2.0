#include "main.h"


void armOp() {
  pros::Controller master(CONTROLLER_MASTER);
  if(master.get_digital(DIGITAL_B) == 1){ // up
    tilt.move_relative(1.4, 150);
    arm.move(-127);
  }
  else if(master.get_digital(DIGITAL_DOWN) == 1){ // down
    arm.move(127);
  }
  else {
    arm.move(0);
  }
}
