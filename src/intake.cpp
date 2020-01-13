#include "main.h"


void intakeOp() {
pros::Controller master(CONTROLLER_MASTER);

  if(master.get_digital(DIGITAL_R2) == 1) { //outake
      intakeright.move(-80);
      intakeleft.move(80);

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
  if(master.get_digital(DIGITAL_A) == 1){
    tiltAuto();
    // tiltAuto();

  }
  else if(master.get_digital(DIGITAL_B) == 1){
    tilt.move(-127);

  }
  else {
    tilt.move(0);
  }
}

double cv;
double error = 0;
int velocity = 0;
double kp = 75;

void tiltAuto(){ // opcontrol
  double sp = 2.0;
    cv = tilt.get_position();

    error = (sp - cv);
    velocity = error*kp;

    if(velocity > 200) {velocity = 200;}
    if(velocity < 10) {velocity = 10;}

    tilt.move_velocity(velocity);

    if(error <= 0.01) {
      tilt.move_velocity(0);
      // break;
    }
}


void tiltMove(double rot) { // auton
  double sp = rot;
  while (cv <= 2) {
    cv = tilt.get_position();

    error = (sp - cv);
    velocity = error*kp;

    if(velocity > 200) {velocity = 200;}
    if(velocity < 40) {velocity = 40;}

    tilt.move_velocity(velocity);

    /* if(cv >= 1.2 && cv <= 1.4) {
          intakeleft.move_velocity(-200);
          intakeright.move_velocity(200);
     } */

    if(error <= 0.01) {
      tilt.move_velocity(0);
      break;
    }
    pros::delay(10);
  }
}
void tiltBack() {
  tilt.move_absolute(0, 200);
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
