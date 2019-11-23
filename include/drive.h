#ifndef DRIVE_H_
#define DRIVE_H_

void driveOp();
void drive(int vel);
void driveMove(int speed);
void driveTask(int speed, double distance, int ms);
void driveAccel(int speed, double distance, int ms);
void rotateTask(double rot, int ms);
void slowTask(double rot, int ms);
void curve();
void brakeMode();
void coastMode();

#endif
