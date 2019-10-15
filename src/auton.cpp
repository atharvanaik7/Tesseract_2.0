#include "main.h"

void redback() {
  intakeAuto(15); // start intake
  driveTask(150, 39, 150); // drive forward to suck up cubes
  driveTask(100, -6, 100); // drive back
  rotateTask(-33, 100); // rotate to angle for next set of cubes
  driveTask(150, -37, 100); // drive back to be parallel to cubes
  rotateTask(31, 100); // rotate to face cubes
  driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(100, 49, 100); // drive into cubes
  driveTask(150, -48, 100); // drive back into wall
  driveTask(80, 8, 100); // drive forward to turn
  rotateTask(95, 0); // rotate towards corner goal
  driveTask(80, 10, 100); //
  intakeAuto(-0.4);
  tiltMove(1.65);
  intakeAuto(-5);
  tiltBack();
  driveTask(100, -15, 0);
}
void blueback(){
  intakeAuto(15); // start intake
  driveTask(150, 39, 150); // drive forward to suck up cubes
  driveTask(100, -6, 100); // drive back
  rotateTask(30, 100); // rotate to angle for next set of cubes
  driveTask(150, -36, 100); // drive back to be parallel to cubes
  rotateTask(-35, 100); // rotate to face cubes
  driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(100, 49, 100); // drive into cubes
  driveTask(150, -50, 100); // drive back into wall
  driveTask(80, 8, 100); // drive forward to turn
  rotateTask(-91, 0); // rotate towards corner goal
  driveTask(80, 14, 100); //
  intakeAuto(-0.4);
  tiltMove(1.65);
  intakeAuto(-5);
  tiltBack();
  driveTask(100, -15, 0);

}
void test(){
  intakeAuto(-0.4);
  tiltMove(1.65);
  intakeAuto(-5);
  tiltBack();
}
