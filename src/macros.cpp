#include "main.h"

void dropCubes() {
  intakeAuto(-0.65); // outtake
  tiltMove(2.0); // tilt to drop cubes
  intakeAuto(0.6);
  pros::delay(450);
  intakeSpeed(-5, 200); // outtake/drop
  driveTask(150, -20, 0); // drive back
}
