#include "main.h"

void redsmall() { // test for consistency
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(100, 36, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  rotateTask(45, 180, 100); // rotate to angle for next set of cubes
  driveTask(160, -37, 50); // drive back to be parallel to cubes
  rotateTask(-43, 180, 100); // rotate to face cube 42
  intakeAuto(9); // start intake
  driveTask(105, 29, 200); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  rotateTask(126.7, 100, 100);
  driveAccel(160, 39.8, 50); // drive forward to drop inside the corner goal
  dropCubes(); // drop cubes
}

void bluesmall(){ // test for consistency
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(100, 36, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  rotateTask(-33, 180, 100); // rotate to angle for next set of cubes
  driveTask(160, -37, 50); // drive back to be parallel to cubes
  rotateTask(40, 180, 100); // rotate to face cube
  intakeAuto(9); // start intake
  driveTask(105, 29, 150); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  rotateTask(-120.4, 100, 100);
  driveAccel(160, 38.2, 50); // drive forward to drop inside the corner goal 38.5
  dropCubes(); // drop cubes
}

void redbig() { // good
  intakeSpeed(-7, 200);
  pros::delay(1500);
  intakeAuto(13);
  driveTask(100, 33, 0);
  driveTask(70, -5, 500);
  driveTask(70, 20, 200);
  driveTask(120, -28, 0);
  rotateTask(-90, 180, 0);
  intakeAuto(7);
  driveTask(120, 22, 0);
  rotateTask(-33, 180, 0);
  driveTask(70, 7, 200);
  intakeAuto(-0.7); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(0.9);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(100, -20, 0); // drive back
}

void redbig1() { // good
  intakeSpeed(-7, 200);
  pros::delay(1000);
  tiltMove(1.9);
}

void bluebig() { // good
  intakeSpeed(-7, 200);
  pros::delay(1500);
  intakeAuto(13);
  driveTask(100, 33, 0);
  driveTask(70, -5, 500);
  driveTask(70, 20, 200);
  driveTask(120, -28, 0);
  rotateTask(87, 180, 0);
  intakeAuto(7);
  driveTask(120, 22, 0);
  rotateTask(40, 180, 0);
  driveTask(70, 7, 200);
  intakeAuto(-0.72); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(0.9);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(100, -20, 0); // drive back
}

void skills() { // 24 maybe please. Redo after tracker wheels
  intakeSpeed(-7, 200); // start intake to deploy
  pros::delay(1500); // let trays deploy completely
  intakeAuto(10); // start intake
  driveTask(100, 36, 0); // drive forward to suck up cubes
  // driveTask(125, -6, 100); // drive back
  rotateTask(45, 180, 100); // rotate to angle for next set of cubes
  driveTask(160, -37, 50); // drive back to be parallel to cubes
  rotateTask(-43, 180, 100); // rotate to face cube 42
  intakeAuto(9); // start intake
  driveTask(105, 29, 350); // drive into cubes
  // rotateTask(119, 0); // rotate towards corner goal
  rotateTask(127, 100, 100); // 126.5
  driveAccel(160, 39.2, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.7); // outtake
  tiltMove(1.9); // tilt to drop cubes // first stack
  intakeAuto(1);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(150, -18, 400); // drive backs
  tiltBack();
  pros::delay(700);
  // pros::delay(700);
  // tiltBack();
  // driveTask(150, -20, 0);
  rotateTask(-132, 180, 0); // 132
  driveTask(100, -24, 200);
  driveTask(100, 15, 200);
  tiltMove(1.15);
  rotateTask(-87, 180, 100); // 91
  tiltBack();
  pros::delay(800);
  intakeAuto(4.5);
  driveTask(80, 17, 400);
  driveTask(80, -10, 200);
  intakeAuto(-0.7);
  pros::delay(300);
  tilt.move_relative(1.4, 150);
  pros::delay(300);
  armAuto(3.7, 180); // first tower
  pros::delay(1000);
  driveTask(70, 12, 0);
  intakeAuto(-5);
  pros::delay(500);
  driveTask(70, -25, 0);
  // tiltMove(1);
  armAuto(-3.6, 130);
  // pros::delay(700);
  // driveTask(180, -15, 0);
  pros::delay(800);
  rotateTask(86, 180, 0);
  // tiltBack();
  driveTask(80, -13, 200);
  tiltBack();
  pros::delay(800);
  intakeAuto(13);
  driveTask(110, 48, 400);
  driveTask(80, -10, 200);
  intakeAuto(-0.9);
  pros::delay(300);
  tilt.move_relative(1.25, 150);
  pros::delay(300);
  armAuto(3, 180); // second tower
  pros::delay(1000);
  driveTask(70, 6, 300);
  intakeAuto(-5);

  ////////////////////////////////////////

  /*pros::delay(500);
  driveTask(70, -6, 0);

  // pros::delay(500);
  armAuto(-2.8, 100);
  pros::delay(400);
  tiltBack();
  rotateTask(90, 180, 0);
  driveTask(100, 27, 0);
  rotateTask(-45, 180, 0);
  intakeAuto(7);
  driveTask(80, 10, 300);
  driveTask(100, -20, 0);
  rotateTask(45, 180, 0);
  armAuto(3, 180); // third tower
  pros::delay(1000);
  driveTask(70, 7, 200);
  intakeAuto(-5);
  pros::delay(600);
  driveTask(100, -10, 0);
  armAuto(-2.8, 100);
  pros::delay(800);
  tiltBack();
  pros::delay(600);
  driveTask(200, -50, 0);
  rotateTask(-40, 180, 0);
  driveTask(200, -30, 200);
  driveTask(150, 20, 0);
  */
}

void test(){
  armAuto(3, 180);
}
