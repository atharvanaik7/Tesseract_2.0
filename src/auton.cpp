#include "main.h"

void redsmall() {
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(120, 39, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  slowTask(45, 100); // rotate to angle for next set of cubes
  driveTask(200, -38, 50); // drive back to be parallel to cubes
  slowTask(-44, 100); // rotate to face cube // 42
  intakeAuto(9); // start intake
  driveTask(110, 32, 150); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  slowTask(132, 100); // 130
  driveAccel(160, 42, 50); // drive forward to drop inside the corner goal
  dropCubes(); // drop cubes
}

void bluesmall(){
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(120, 39, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  slowTask(-32, 100); // rotate to angle for next set of cubes
  driveTask(200, -38, 50); // drive back to be parallel to cubes
  slowTask(38, 100); // rotate to face cube
  intakeAuto(9); // start intake
  driveTask(110, 32, 250); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  slowTask(-120, 0);
  driveAccel(160, 42.5, 50); // drive forward to drop inside the corner goal
  dropCubes(); // drop cubes
}

void redbig() {
  intakeSpeed(-7, 200);
  pros::delay(1500);
  intakeAuto(13);
  driveTask(100, 33, 0);
  driveTask(70, -5, 500);
  // slowTask(-16, 0);
  driveTask(70, 20, 200);
  // slowTask(18, 0);
  driveTask(120, -28, 0);
  slowTask(-91, 0);
  intakeAuto(7);
  driveTask(120, 14, 0);
  slowTask(-33, 0);
  driveTask(70, 15, 200);
  intakeAuto(-0.7); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(0.9);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(100, -20, 0); // drive back
}

void redbig1() {
  intakeSpeed(-7, 200);
  pros::delay(1000);
  tiltMove(1.9);
}

void bluebig() {
  intakeSpeed(-7, 200);
  pros::delay(1000);
  tiltMove(1.9);
}

void skills() { // 48 maybe please.
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(100, 36, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  slowTask(45, 100); // rotate to angle for next set of cubes
  driveTask(200, -37, 50); // drive back to be parallel to cubes
  slowTask(-43, 100); // rotate to face cube
  intakeAuto(9); // start intake
  driveTask(105, 29, 150); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  slowTask(130, 100);
  driveAccel(160, 40.5, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.5); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(0.9);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  tiltBack();
  driveTask(200, -20, 400); // drive backs
  // pros::delay(700);
  // tiltBack();
  // driveTask(150, -20, 0);
  slowTask(-132, 0);
  driveTask(100, -25, 200);
  driveTask(100, 22, 200);
  slowTask(-91, 100);
  intakeAuto(6);
  driveTask(80, 17, 400);
  driveTask(80, -10, 200);
  intakeAuto(-0.9);
  pros::delay(300);
  armAuto(3.8, 180);
  pros::delay(1000);
  driveTask(70, 8, 0);
  intakeAuto(-5);
  pros::delay(500);
  driveTask(70, -21, 0);
  // tiltMove(1);
  armAuto(-3.7, 100);
  // pros::delay(700);
  // driveTask(180, -15, 0);
  pros::delay(400);
  slowTask(90, 0);
  tiltBack();
  driveTask(80, -20, 200);
  intakeAuto(12);
  driveTask(120, 46, 400);
  driveTask(80, -10, 200);
  intakeAuto(-0.9);
  pros::delay(300);
  armAuto(3, 180);
  pros::delay(1000);
  intakeAuto(-5);
  pros::delay(500);
  armAuto(-2.8, 100);
  pros::delay(400);
  slowTask(-90, 0);
  tiltBack();
  driveTask(100, 27, 0);
  slowTask(98, 0);
  intakeAuto(7);
  driveTask(140, 73, 100);
  slowTask(90, 0);
  driveTask(120, 26, 0);
  slowTask(96, 100);
  driveTask(100, -16, 200);
  intakeAuto(11);
  driveTask(100, 43, 200);
  slowTask(-138, 100);
  driveTask(95, 30, 50);
  dropCubes();
}

void test(){
  intakeAuto(-0.7);
  pros::delay(300);
  armAuto(3.8, 180);
  pros::delay(1000);
  intakeAuto(-5);
  pros::delay(500);
  armAuto(-4, 100);
}
