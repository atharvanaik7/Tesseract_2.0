#include "main.h"
#include "okapi/api.hpp"

double drive_multiplier = 0;

// pros::Controller master(CONTROLLER_MASTER);
void driveOp() {
  pros::Controller master(CONTROLLER_MASTER);

  if(arm.get_position() <= -1) {
    drive_multiplier = 0.5;
  }
  else {
    drive_multiplier = 0.75;
  }
  front_left.move(master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * drive_multiplier));
  front_right.move(-master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * drive_multiplier));
  back_left.move(master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * drive_multiplier));
  back_right.move(-master.get_analog(ANALOG_LEFT_Y) + (master.get_analog(ANALOG_RIGHT_X) * drive_multiplier));

}

// CHASSIS CONTROL

// auto myChassis = ChassisControllerFactory::create(
//   {-1,-2},
//   {9,10},
//   AbstractMotor::gearset::green,
//   {4_in, 12.5_in}
// );

// auto profileController = AsyncControllerFactory::motionProfile(1, 2, 10, myChassis);

// DRIVE AUTON FUNCTIONS

void drive(int vel) {
  front_left.move_velocity(vel);
  front_right.move_velocity(-vel);
  back_left.move_velocity(vel);
  back_right.move_velocity(-vel);
}

void driveMove(int speed) {
  front_left.move(speed);
  front_right.move(-speed);
  back_left.move(speed);
  back_right.move(-speed);
}

void rotate(int vel) {
  front_left.move_velocity(vel);
  front_right.move_velocity(vel);
  back_left.move_velocity(vel);
  back_right.move_velocity(vel);
}

void driveTask(int speed, double distance, int ms){ // normal drive function
  bool driving = true;
  double sp = distance /= 12.8;
  double cv;
  double kp = 250;
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
    if(velocity <= 20 && velocity > 0) {velocity = 20;}
    if(velocity >= -20 && velocity < 0) {velocity = -20;}

    drive(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  drive(0);
  pros::delay(ms);
}

void driveAccel(int speed, double distance, int ms){ // integral at beginning for accel
  bool driving = true;
  double sp = distance /= 12.8;
  double cv;
  double kp = 250;
  double kd = 100;
  double ki = 4;
  double error = 0;
  double prev_error;
  int velocity = 0;
  double derivative;
  double integral;

  back_left.tare_position();
  back_right.tare_position();

  while (driving) {
    cv = (back_left.get_position() - back_right.get_position()) / 2;

    error = sp - cv;
    derivative = error - prev_error;
    integral += error;
    prev_error = error;
    velocity = error*kp + derivative*kd + integral*ki;

    if(fabs(error) > fabs(sp)*0.75) {
      kp = 0;
      ki = 2.5;
      kd = 0;
    }
    else {
      kp = 190;
      ki = 0;
      kd = 100;
    }

    if(velocity > speed) {velocity = speed;}
    if(velocity < -speed) {velocity = -speed;}
    if(velocity <= 20 && velocity > 0) {velocity = 20;}
    if(velocity >= -20 && velocity < 0) {velocity = -20;}

    drive(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  drive(0);
  pros::delay(ms);
}

void rotateTask(double rot, int ms) { // normal turn
  bool driving = true;
  rot /= 360;
  double sp;
  if(rot < 0) {sp = rot*3.32;}
  else {sp = rot*3.68;}
  double cv;
  double kp = 160;
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
    else if (velocity <= 20 && velocity > 0) { velocity = 20; }
    else if (velocity >= -20 && velocity < 0) { velocity = -20; }

    rotate(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  rotate(0);
  pros::delay(ms);
}

void rotateTask(double rot, int speed, int ms) { // overflow for rotate with integral
  bool driving = true;
  rot /= 360;
  double sp;
  if(rot < 0) {sp = rot*2.8;}
  else {sp = rot*2.8;}
  double cv;
  double kp = 0;
  double kd = 1;
  double ki = 0;
  double error = 0;
  double prev_error;
  int velocity = 0;
  double derivative;
  double integral;

  back_left.tare_position();
  // back_right.tare_position();

  while (driving) {
    cv = back_left.get_position();

    error = sp - cv;
    derivative = error - prev_error;
    integral += error;
    prev_error = error;

      if(fabs(error) > fabs(sp)*0.5) {
        kp = 0;
        ki = 4;
        kd = 0;
      }
      else {
        kp = 150;
        ki = 0;
        kd = 100;
      }


    velocity = error*kp + derivative*kd + integral*ki;

    if(velocity > speed) {velocity = speed;}
    else if(velocity < -speed) {velocity = -speed;}
    // else if (velocity <= 20 && velocity > 0) { velocity = 20; }
    // else if (velocity >= -20 && velocity < 0) { velocity = -20; }

    rotate(velocity);

    if(error <= 0.05 && error >= -0.05) {driving = false;}

    pros::delay(20);
  }
  rotate(0);
  pros::delay(ms);
}

// void curve() {
//   profileController.generatePath({Point{0_in, 0_in, 0_deg}, Point{36_in, 20_in, 0_deg}}, "A");
//   profileController.setTarget("A");
//   profileController.waitUntilSettled();
// }


void brakeMode() {
  front_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  front_right.set_brake_mode(MOTOR_BRAKE_HOLD);
  back_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  back_right.set_brake_mode(MOTOR_BRAKE_HOLD);
  tilt.set_brake_mode(MOTOR_BRAKE_BRAKE);
}

void coastMode() {
  front_left.set_brake_mode(MOTOR_BRAKE_COAST);
  front_right.set_brake_mode(MOTOR_BRAKE_COAST);
  back_left.set_brake_mode(MOTOR_BRAKE_COAST);
  back_right.set_brake_mode(MOTOR_BRAKE_COAST);
}
