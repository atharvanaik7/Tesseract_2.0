#ifndef DRIVE_H_
#define DRIVE_H_

void driveOp();
void drive(int vel);
void driveTask(int speed, double distance, int ms);
void rotateTask(double rot, int ms);
void brakeMode();
void coastMode();

#endif
