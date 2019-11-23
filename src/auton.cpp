#include "main.h"

void redsmall() {
  // intakeSpeed(-7, 200); // start intake to deploy
  // pros::delay(1500); // let trays deploy completely
  // intakeAuto(6); // start intake
  // driveTask(150, 39, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  // slowTask(-34, 100); // rotate to angle for next set of cubes
  // driveTask(200, -34, 50); // drive back to be parallel to cubes
  // slowTask(42, 100); // rotate to face cube
  // intakeAuto(11); // start intake
  // driveTask(90, 36, 100); // drive into cubes
  // // rotateTask(119, 0); // rotate towards corner goal
  // slowTask(138, 0);
  // driveTask(95, 30, 50); // drive forward to drop inside the corner goal
  // dropCubes(); // drop cubes

  //////////////////////////////////////////////////////////////////////
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(120, 39, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  slowTask(45, 100); // rotate to angle for next set of cubes
  driveTask(200, -38, 50); // drive back to be parallel to cubes
  slowTask(-42, 100); // rotate to face cube
  intakeAuto(9); // start intake
  driveTask(110, 32, 150); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  slowTask(130, 100);
  driveAccel(160, 42, 50); // drive forward to drop inside the corner goal
  dropCubes(); // drop cubes

}

void bluesmall(){
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(120, 39, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  slowTask(-34, 100); // rotate to angle for next set of cubes
  driveTask(200, -38, 50); // drive back to be parallel to cubes
  slowTask(42, 100); // rotate to face cube
  intakeAuto(9); // start intake
  driveTask(110, 32, 150); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  slowTask(-115, 0);
  driveAccel(160, 43, 50); // drive forward to drop inside the corner goal
  dropCubes(); // drop cubes
}

void redbig() {
  intakeSpeed(-7, 200);
  pros::delay(1500);
  intakeAuto(5);
  driveTask(100, 17, 50);
  rotateTask(-90, 0);
  intakeAuto(5);
  driveTask(100, 18, 100); // 42
  rotateTask(-45, 0);
  driveTask(100, 10, 100);
  intakeSpeed(-10, 200);
  pros::delay(800);
  driveTask(100, -12, 0);

  ////////////////////////////////////////

  // intakeSpeed(-7, 200);
  // pros::delay(1000);
  // tiltMove(1.9);
}

void bluebig() {
  intakeSpeed(-7, 200);
  pros::delay(1000);
  tiltMove(1.9);
}

void skills() { // 48 maybe please.
  redsmall();
  driveTask(150, -20, 0);
  slowTask(130, 100);
  intakeAuto(5);
  driveTask(80, 10, 400);
  driveTask(80, -6, 200);
  intakeAuto(-0.7);
  armAuto(5, 180);
  pros::delay(800);
  intakeAuto(-5);
  pros::delay(500);
  armAuto(0, 100);
  driveTask(180, -20, 0);
  slowTask(90, 0);
  intakeAuto(5);
  driveTask(80, 15, 400);
  driveTask(80, -6, 200);
  intakeAuto(-0.7);
  armAuto(3, 180);
  pros::delay(800);
  intakeAuto(-5);
  pros::delay(500);
  armAuto(0, 100);
  slowTask(-90, 0);
  driveTask(100, 12, 0);
  slowTask(90, 0);
  intakeAuto(7);
  driveTask(140, 50, 100);
  slowTask(90, 0);
  driveTask(120, 20, 0);
  slowTask(90, 100);
  driveTask(80, -10, 200);
  intakeAuto(11);
  driveTask(100, 43, 200);
  slowTask(135, 100);
  driveTask(95, 30, 50);
  dropCubes();
}

void test(){
  slowTask(130, 0);
  driveAccel(160, 43, 250);
}
