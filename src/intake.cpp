#include "main.h"


void intakeOp() {
pros::Controller master(CONTROLLER_MASTER);

  if(master.get_digital(DIGITAL_R2) == 1) { //outake
    if(arm.get_position() <= -2) {
      intakeright.move(-63);
      intakeleft.move(63);
    }
    else {
      intakeright.move(-127);
      intakeleft.move(127);
    }
  }
  else if(master.get_digital(DIGITAL_R1) == 1){ //intake
    intakeright.move(127);
    intakeleft.move(-127);
  }
  else {
    intakeright.move(0);
    intakeleft.move(0);
  }
}

void tiltOp() {
  pros::Controller master(CONTROLLER_MASTER);
  if(master.get_digital(DIGITAL_L1) == 1){
    tiltAuto();
    // tiltAuto();

  }
  else if(master.get_digital(DIGITAL_L2) == 1){
    tilt.move(-127);

  }
  else {
    tilt.move(0);
  }
}

double cv;
double error = 0;
int velocity = 0;

void tiltAuto(){
  double sp = 2.0;
    cv = tilt.get_position();

    error = (sp - cv);
    velocity = error*32.5+5;

    tilt.move_velocity(velocity);

    if(error <= 0.1) {
      tilt.move_velocity(0);
      // break;
    }
}


void tiltMove(double rot) {
  double sp = rot;
  while (cv <= 2) {
    cv = tilt.get_position();

    error = (sp - cv);
    velocity = error*44.4+10;

    tilt.move_velocity(velocity);

    if(error <= 0.1) {
      tilt.move_velocity(0);
      break;
    }
    pros::delay(10);
  }
}
void tiltBack() {
  tilt.move_absolute(0, 180);
}


void intakeAuto(double rot) {
  if(rot < 0) {
    intakeleft.move_relative(-rot, 80);
    intakeright.move_relative(rot, 80);
  }
  else {
    intakeleft.move_relative(-rot, 200);
    intakeright.move_relative(rot, 200);
  }
}
void intakeSpeed(double rot, int speed) {
  intakeleft.move_relative(-rot, speed);
  intakeright.move_relative(rot, speed);
}
