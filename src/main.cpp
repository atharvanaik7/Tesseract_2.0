#include "main.h"
#include "gif-pros/gifclass.hpp"
int count = 1;


/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::ADIDigitalIn rightsensor (RIGHT_SENSOR);
	pros::ADIDigitalIn leftsensor (LEFT_SENSOR);
	pros::ADIDigitalIn selsensor (SELECTOR);

	// intakeleft.set_brake_mode(MOTOR_BRAKE_BRAKE);
	// intakeright.set_brake_mode(MOTOR_BRAKE_BRAKE);

	if(pros::competition::is_disabled()) { // change to is_disabled()
		while(selsensor.get_value() == 0) {
			 if(rightsensor.get_new_press() == 1 && count < 6) { // change count number when adding more
					count += 1;
				}
			 else if(leftsensor.get_new_press() == 1 && count > 1) {
					count -= 1;
				}
			 if(count == 1) {
					redsmallscr();
				}
			 else if(count == 2) {
					redbigscr();
				}
			 else if(count == 3) {
				 bluesmallscr();
			 }
			 else if(count == 4) {
				 bluebigscr();
			 }
			 else if(count == 5) {
				 redbig1scr();
			 }
			 else if(count == 6) {
				 skillsscr();
			 }
		 pros::delay(10);
	 }
 }
	display();
	  // profileController.generatePath({Point{0_in, 0_in, 0_deg}, Point{36_in, 20_in, 0_deg}}, "A");
	  // profileController.setTarget("A");
	  // profileController.waitUntilSettled();
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
	brakeMode();

	// redsmall();
	switch(count) {
		case 1: redsmall(); break;
		case 2: redbig(); break;
		case 3: bluesmall(); break;
		case 4: bluebig(); break;
		case 5: redbig1(); break;
		case 6: skills(); break;
	}
	// redsmall();
	// bluesmall();

}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	intakeleft.set_brake_mode(MOTOR_BRAKE_BRAKE);
	intakeright.set_brake_mode(MOTOR_BRAKE_BRAKE);
	tilt.set_brake_mode(MOTOR_BRAKE_BRAKE);
	coastMode();
	while (true) {

		driveOp();
		intakeOp();
		tiltOp();
		armOp();


		pros::delay(20);
	}
}
