#ifndef INTAKE_H_
#define INTAKE_H_

void intakeOp();
void tiltOp();
void tiltpid(int mode, int ms);
void tiltAuto();
void tiltMove(double rot);
void intakeAuto(double rot);
void tiltBack();
void intakeSpeed(double rot, int speed);

#endif
