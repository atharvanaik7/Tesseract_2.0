#include "main.h"
#include "okapi/api.hpp"


// pros::Controller master(CONTROLLER_MASTER);
void driveOp() {
  pros::Controller master(CONTROLLER_MASTER);

  front_left.move(master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * 0.75));
  front_right.move(-master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * 0.75));
  back_left.move(master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * 0.75));
  back_right.move(-master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * 0.75));

}

// DRIVE AUTON FUNCTIONS

void drive(int vel) {
  front_left.move_velocity(vel);
  front_right.move_velocity(-vel);
  back_left.move_velocity(vel);
  back_right.move_velocity(-vel);
}

void rotate(int vel) {
  front_left.move_velocity(vel);
  front_right.move_velocity(vel);
  back_left.move_velocity(vel);
  back_right.move_velocity(vel);
}

void driveTask(int speed, double distance, int ms){
  bool driving = true;
  double sp = distance /= 12.8;
  double cv;
  double kp = 190;
  double kd = 100;
  double error = 0;
  double prev_error;
  int velocity = 0;
  double derivative;

  back_left.tare_position();
  back_right.tare_position();

  while (driving) {
    cv = (back_left.get_position() - back_right.get_position()) / 2;

    error = sp - cv;
    derivative = error - prev_error;
    prev_error = error;
    velocity = error*kp + derivative*kd;

    if(velocity > speed) {velocity = speed;}
    if(velocity < -speed) {velocity = -speed;}
    // if(velocity < 20) {velocity = 20;}
    // if(velocity > -20) {velocity = -20;}

    drive(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  drive(0);
  pros::delay(ms);
}

void rotateTask(double rot, int ms) {
  bool driving = true;
  rot /= 360;
  double sp;
  if(rot < 0) {sp = rot*3.32;}
  else {sp = rot*3.68;}
  double cv;
  double kp = 200;
  double kd = 100;
  double error = 0;
  double prev_error;
  int velocity = 0;
  double derivative;

  back_left.tare_position();
  // back_right.tare_position();

  while (driving) {
    cv = back_left.get_position();

    error = sp - cv;
    derivative = error - prev_error;
    prev_error = error;
    velocity = error*kp + derivative*kd;

    if(velocity > 150) {velocity = 150;}
    else if(velocity < -150) {velocity = -150;}
    // else if (velocity <= 20 && velocity > 0) { velocity = 20; }
    // else if (velocity >= -20 && velocity < 0) { velocity = -20; }

    rotate(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  rotate(0);
  pros::delay(ms);
}

void brakeMode() {
  front_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  front_right.set_brake_mode(MOTOR_BRAKE_HOLD);
  back_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  back_right.set_brake_mode(MOTOR_BRAKE_HOLD);
}

void coastMode() {
  front_left.set_brake_mode(MOTOR_BRAKE_COAST);
  front_right.set_brake_mode(MOTOR_BRAKE_COAST);
  back_left.set_brake_mode(MOTOR_BRAKE_COAST);
  back_right.set_brake_mode(MOTOR_BRAKE_COAST);
}
