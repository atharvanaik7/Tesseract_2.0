#include "main.h"

pros::Motor front_left = pros::Motor (2, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);
pros::Motor front_right = pros::Motor (9, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS); // neg
pros::Motor back_left = pros::Motor (1, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS); // pos
pros::Motor back_right = pros::Motor (10, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);
pros::Motor tilt = pros::Motor (20, MOTOR_GEARSET_36, 0, MOTOR_ENCODER_ROTATIONS);
pros::Motor intakeright = pros::Motor(18, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS); // negative
pros::Motor intakeleft = pros::Motor(14, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS); // positive
pros::Motor arm = pros::Motor(19, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);


// pros::Controller master = pros::Controller(CONTROLLER_MASTER);
