#include "main.h"

void redback() {
  intakeAuto(6); // start intake
  driveTask(150, 39, 100); // drive forward to suck up cubes
  driveTask(150, -6, 50); // drive back
  rotateTask(-35, 100); // rotate to angle for next set of cubes
  driveTask(180, -38, 100); // drive back to be parallel to cubes
  rotateTask(35, 100); // rotate to face cubes
  // driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(8.7); // start intake
  driveTask(115, 41.5, 100); // drive into cubes
  // intakeAuto(-0.5); // outtake a lil so that last block isnt messed up
  // pros::delay(400); // delay cuz its too quick between outtake and intake
  // intakeAuto(2); // intake the cube in again
  driveTask(150, -45, 0); // drive back into wall
  driveTask(100, 6., 0); // drive forward to turn
  rotateTask(88, 0); // rotate towards corner goal
  driveTask(100, 11, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.6); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.3);
  pros::delay(600);
  intakeAuto(-5); // outtake/drop
  // pros::delay(400);
  driveTask(150, -20, 0); // drive back
  tiltBack(); // put angler down
}

void blueback(){
  intakeAuto(6); // start intake
  driveTask(150, 39, 100); // drive forward to suck up cubes
  driveTask(150, -6, 50); // drive back
  rotateTask(36, 100); // rotate to angle for next set of cubes
  driveTask(180, -38, 100); // drive back to be parallel to cubes
  rotateTask(-37, 100); // rotate to face cubes
  // driveTask(80, -8, 200); // drive into wall to square
  intakeAuto(8); // start intake
  driveTask(110, 42, 100); // drive into cubes
  // intakeAuto(-0.5); // outtake a lil so that last block isnt messed up
  // pros::delay(400); // delay cuz its too quick between outtake and intake
  // intakeAuto(2); // intake the cube in again
  driveTask(150, -45.8, 0); // drive back into wall
  driveTask(100, 6, 0); // drive forward to turn
  rotateTask(-96, 0); // rotate towards corner goal
  driveTask(100, 10, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.6); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.3);
  pros::delay(600);
  intakeAuto(-5); // outtake/drop
  // pros::delay(400);
  driveTask(150, -20, 0); // drive back
  tiltBack(); // put angler down
}

void redfront() {
  driveTask(120, 8, 50);
  intakeSpeed(3, 200);
  driveTask(100, -8, 50);
  intakeAuto(1.2);
  driveTask(120, 8, 0);
  rotateTask(-50, 0);
  driveTask(100, 6, 0);
  intakeSpeed(-5, 200);
  pros::delay(500);
  // driveTask(100, -8, 0);
  rotateTask(57, 0);
  // driveTask(200, -13, 200);
  intakeAuto(10);
  driveTask(180, 34, 400); // 42
  driveTask(170, -24, 100);
  rotateTask(-81, 0);
  intakeAuto(10);
  driveTask(100, 27, 100);
  rotateTask(-53, 100);
  driveTask(100, 10, 100);
  intakeAuto(-0.6); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.3);
  pros::delay(600);
  // tiltMove(1.2);
  intakeAuto(-5); // outtake/drop
  pros::delay(600);
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down)
}

void bluefront() {
  driveTask(120, 8, 50);
  intakeSpeed(1, 200);
  driveTask(100, -8, 50);
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
  driveTask(170, -24, 100);
  rotateTask(86, 0);
  intakeAuto(8);
  driveTask(100, 27, 100);
  rotateTask(50, 100);
  driveTask(100, 10, 100);
  intakeAuto(-0.6); // outtake
  tiltMove(1.8); // tilt to drop cubes
  intakeAuto(0.3);
  pros::delay(600);
  // tiltMove(1.2);
  intakeAuto(-5); // outtake/drop
  driveTask(150, -15, 0); // drive back
  tiltBack(); // put angler down)
}

void skills() { // 80 maybe please.
  rotateTask(-35, 0);
  driveTask(100, 6, 100); // dont need if preload in
  pros::delay(400);
  intakeAuto(1);
  pros::delay(400);
  armAuto(5, 150);
  pros::delay(500);
  intakeAuto(-1);
  pros::delay(500);
  armAuto(-5, 150);
  driveTask(100, -6, 100);
  rotateTask(35, 0);
  driveTask(100, -7, 100);
  intakeAuto(6.5); // start intake
  driveTask(150, 39, 100); // drive forward to suck up cubes
  driveTask(150, -6.5, 50); // drive back
  rotateTask(-35, 100); // rotate to angle for next set of cubes
  driveTask(180, -36, 100); // drive back to be parallel to cubes
  rotateTask(33, 100); // rotate to face cubes
  driveTask(80, -6, 200); // drive into wall to square
  intakeAuto(9); // start intake
  driveTask(130, 42.5, 100); // drive into cubes
  intakeAuto(-0.3); // outtake a lil so that last block isnt messed up
  pros::delay(400); // delay cuz its too quick between outtake and intake
  intakeAuto(2); // intake the cube in again
  driveTask(150, -46, 0); // drive back into wall
  driveTask(100, 6, 0); // drive forward to turn
  rotateTask(100, 0); // rotate towards corner goal
  driveTask(100, 10, 50); // drive forward to drop inside the corner goal
  intakeAuto(-0.45); // outtake
  tiltMove(1.73); // tilt to drop cubes
  intakeAuto(0.2);
  pros::delay(600);
  intakeAuto(-5); // outtake/drop
  // pros::delay(400);
  driveTask(100, -15, 0); // drive back
  driveTask(150, -10, 0);
  tiltBack(); // put angler down
  // rotateTask(-10, 100);
  // driveTask(150, -10, 100);
  rotateTask(-90, 0);
  driveTask(100, -8, 100);
  intakeAuto(20);
  driveTask(170, 84, 0);
  rotateTask(90, 100);
  driveTask(130, 16, 100);
  rotateTask(90, 100);
  driveTask(100, -7, 200);
  intakeAuto(15); // start intake
  driveTask(130, 42, 100); // drive forward to suck up cubes
  driveTask(150, -45.5, 200); // drive back
  driveTask(100, 6, 50);
  rotateTask(-96, 0);
  driveTask(100, 10, 100);
  intakeAuto(-0.45); // outtake
  tiltMove(1.75); // tilt to drop cubes
  intakeAuto(0.2);
  pros::delay(600);
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
