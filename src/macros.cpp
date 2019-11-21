#include "main.h"

void dropCubes() {
  intakeAuto(-0.72); // outtake
  tiltMove(1.9); // tilt to drop cubes
  intakeAuto(0.75);
  pros::delay(400);
  intakeSpeed(-5, 150); // outtake/drop
  driveTask(200, -20, 0); // drive back
}
