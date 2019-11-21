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
  }
  else {
    arm.move(0);
  }
}

void armAuto(double rot, int speed) { // @param enter pos rot for move up enter neg for move down
  arm.move_relative(-rot, speed);
  if(rot < 0) {
    tilt.move_absolute(0, 180);
  }
  else {
    tiltMove(1);
  }
}
