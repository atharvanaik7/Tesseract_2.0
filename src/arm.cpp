#include "main.h"


void armOp() {
  pros::Controller master(CONTROLLER_MASTER);
  if(master.get_digital(DIGITAL_L1) == 1){ // up
    arm.move(-127);
    if(tilt.get_position() <= 0.5) {
      tilt.move(127);
    }
    else if(tilt.get_position() > 0.55) {
      tilt.move(-60);
    }
    else {
      tilt.move(0);
    }
  }
  else if(master.get_digital(DIGITAL_L2) == 1){ // down
    if (count == 6) {
      arm.move(127);
      if(arm.get_position() >= -1.9) {
        tilt.move(-127);
      }
    }
    else {
      arm.move(127);
    }
  }
  else {
    arm.move(0);
  }
}

void armAuto(double rot, int speed) { // enter pos rot for move up enter neg for move down
  // if(rot > 0) {
  //   tilt.move_relative(1.4, 200);
  // }
  // pros::delay(400);
  arm.move_relative(-rot, speed);
}
