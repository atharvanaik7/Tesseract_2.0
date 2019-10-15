#include "main.h"

void redback() {
  intakeAuto(15); // start intake
  driveTask(150, 39, 150); // drive forward to suck up cubes
  driveTask(100, -6, 100); // drive back
  rotateTask(-38, 100); // rotate to angle for next set of cubes
  driveTask(150, -35, 100); // drive back to be parallel to cubes
  rotateTask(33, 100); // rotate to face cubes
  driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(100, 49, 100); // drive into cubes
  intakeAuto(-0.7); // outtake a lil so that last block isnt messed up
  pros::delay(400); // delay cuz its too quick between outtake and intake
  intakeAuto(2); // intake the cube in again
  driveTask(150, -49, 100); // drive back into wall
  driveTask(80, 10, 100); // drive forward to turn
  rotateTask(99, 0); // rotate towards corner goal
  driveTask(80, 5, 100); // drive forward to drop inside the corner goal
  intakeAuto(-0.5); // outtake
  tiltMove(1.75); // tilt to drop cubes
  // intakeAuto(0.5);
  // pros::delay(500);
  intakeAuto(-5); // outtake/drop
  driveTask(100, -15, 0); // drive back
  tiltBack(); // put angler down
}
void blueback(){
  intakeAuto(15); // start intake
  driveTask(145, 39, 150); // drive forward to suck up cubes
  driveTask(100, -6, 100); // drive back
  rotateTask(30, 100); // rotate to angle for next set of cubes
  driveTask(150, -36, 100); // drive back to be parallel to cubes
  rotateTask(-35, 100); // rotate to face cubes
  driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(100, 49, 100); // drive into cubes
  intakeAuto(-0.7); // outtake a lil so that last block isnt messed up
  pros::delay(400); // delay cuz its too quick between outtake and intake
  intakeAuto(2); // intake the cube in again
  driveTask(150, -50, 100); // drive back into wall
  driveTask(80, 11, 100); // drive forward to turn
  rotateTask(-90, 0); // rotate towards corner goal
  driveTask(80, 10, 100); // drive forward to drop inside the corner goal
  intakeAuto(-0.45); // outtake
  tiltMove(1.75); // tilt to drop cubes
  intakeAuto(-5); // outtake/drop
  driveTask(100, -15, 0); // drive back
  tiltBack(); // put angler down
}
void test(){
  intakeAuto(-0.4);
  tiltMove(1.65);
  intakeAuto(-5);
  tiltBack();
}
