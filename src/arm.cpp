#include "main.h"


void armOp() {
  pros::Controller master(CONTROLLER_MASTER);
  if(master.get_digital(DIGITAL_L1) == 1){ // up
    arm.move(-127);
    tilt.move(127);
    if(tilt.get_position() >= 1.25) {
      tilt.move(0);
    }
  }
  else if(master.get_digital(DIGITAL_L2) == 1){ // down
    arm.move(127);
  }
  else {
    arm.move(0);
  }
}

void armAuto(double rot, int speed) { // @param enter pos rot for move up enter neg for move down
  if(rot > 0) {
    tiltMove(1.4);
  }
  pros::delay(300);
  arm.move_relative(-rot, speed);
}
