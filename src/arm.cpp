#include "main.h"


void armOp() {
  pros::Controller master(CONTROLLER_MASTER);
  if(master.get_digital(DIGITAL_B) == 1){ // up
    arm.move(-127);
    tilt.move(110);
    if(tilt.get_position() >= 1) {
      tilt.move(0);
    }
  }
  else if(master.get_digital(DIGITAL_DOWN) == 1){ // down
    arm.move(127);
    pros::delay(100);
    tilt.move(-127);
    if(tilt.get_position() <= 0.1) {
      tilt.move(0);
    }
  }
  else {
    arm.move(0);
  }
}

void armAuto(double rot, int speed) {
  arm.move_absolute(rot, speed);
  if(rot == 0) {
    tiltMove(-1);
  }
  else {
    tiltMove(1);
  }
}
