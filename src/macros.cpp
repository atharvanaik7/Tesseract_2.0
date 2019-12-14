#include "main.h"

void dropCubes() {
  intakeAuto(-0.7); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(1);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(200, -20, 0); // drive back
}
