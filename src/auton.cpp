#include "main.h"

void redback() {
  intakeAuto(15); // start intake
  driveTask(150, 39, 100); // drive forward to suck up cubes
  driveTask(150, -6, 50); // drive back
  rotateTask(-38, 100); // rotate to angle for next set of cubes
  driveTask(180, -38, 100); // drive back to be parallel to cubes
  rotateTask(33, 100); // rotate to face cubes
  // driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(130, 42, 100); // drive into cubes
  // intakeAuto(-0.5); // outtake a lil so that last block isnt messed up
  // pros::delay(400); // delay cuz its too quick between outtake and intake
  // intakeAuto(2); // intake the cube in again
  driveTask(150, -49, 0); // drive back into wall
  driveTask(100, 6, 0); // drive forward to turn
  rotateTask(100, 0); // rotate towards corner goal
  driveTask(100, 5, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.4); // outtake
  tiltMove(1.75); // tilt to drop cubes
  intakeAuto(0.3);
  pros::delay(600);
  intakeAuto(-5); // outtake/drop
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down
}
void blueback(){
  intakeAuto(15); // start intake
  driveTask(150, 39, 100); // drive forward to suck up cubes
  driveTask(150, -6, 50); // drive back
  rotateTask(32, 100); // rotate to angle for next set of cubes
  driveTask(180, -39, 100); // drive back to be parallel to cubes
  rotateTask(-32, 100); // rotate to face cubes
  // driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(10); // start intake
  driveTask(110, 46, 100); // drive into cubes
  // intakeAuto(-0.5); // outtake a lil so that last block isnt messed up
  // pros::delay(400); // delay cuz its too quick between outtake and intake
  // intakeAuto(2); // intake the cube in again
  driveTask(150, -49.5, 0); // drive back into wall
  driveTask(100, 7.5, 0); // drive forward to turn
  rotateTask(-89, 0); // rotate towards corner goal
  driveTask(100, 10, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.5); // outtake
  tiltMove(1.75); // tilt to drop cubes
  intakeAuto(0.35);
  pros::delay(600);
  intakeAuto(-5); // outtake/drop
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down
}
void redfront() {
  intakeAuto(1.2);
  driveTask(120, 8, 0);
  rotateTask(-50, 0);
  driveTask(100, 6, 0);
  intakeSpeed(-5, 200);
  pros::delay(500);
  // driveTask(100, -8, 0);
  rotateTask(58, 0);
  // driveTask(200, -13, 200);
  intakeAuto(10);
  driveTask(180, 34, 400); // 42
  driveTask(150, -24, 100);
  rotateTask(-86, 0);
  intakeAuto(10);
  driveTask(100, 27, 100);
  rotateTask(-35, 100);
  driveTask(100, 13, 100);
  intakeAuto(-0.5); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.35);
  pros::delay(600);
  // tiltMove(1.2);
  intakeAuto(-5); // outtake/drop
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down)
}
void bluefront() {
  intakeAuto(1.2);
  driveTask(120, 8, 0);
  rotateTask(50, 0);
  driveTask(100, 6, 0);
  intakeSpeed(-5, 200);
  pros::delay(500);
  // driveTask(100, -8, 0);
  rotateTask(-51, 0);
  // driveTask(200, -13, 200);
  intakeAuto(10);
  driveTask(180, 34, 400); // 42
  driveTask(150, -24, 100);
  rotateTask(86, 0);
  intakeAuto(10);
  driveTask(100, 27, 100);
  rotateTask(48, 100);
  driveTask(100, 13, 100);
  intakeAuto(-0.44); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.5);
  pros::delay(600);
  // tiltMove(1.2);
  intakeAuto(-5); // outtake/drop
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down)
}
void test(){
  intakeAuto(-0.4);
  tiltMove(1.65);
  intakeAuto(-5);
  tiltBack();
}
