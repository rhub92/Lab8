/*
* Lab 8: Robot Maze
*
* Author: Ryan Hub
*
* Date: 12 December 2013
*
* Purpose: The purpose of this lab is to use the libraries created in Labs 6 and 7 to have a robot navigate itself through the maze from start to
* finish without hitting any of the walls
*
* Documentation: None
*/

#include "Robot_Movement_Library/motorMovement.h"
#include "Robot_Sensor_Library/robotsensor.h"



int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initMotorTimer();
    initializeSensorSubsystem();

	while (1) {
		unsigned int centersensor = centerSensorReading();
		unsigned int rightsensor = rightSensorReading();
		unsigned int leftsensor = leftSensorReading();

		if (centersensor > 0x230 && leftsensor < 0x240 && rightsensor > 0x1ee)
			moveRobotSharpLeft();

		else if (centersensor > 0x230 && leftsensor > 0x240)
			moveRobotSharpRight();

		else if (leftsensor > 0x300 && centersensor < 0x230)
			moveRobotRight();

		else if (rightsensor > 0x300 && centersensor < 0x230)
			moveRobotLeft();

		else
			moveRobotForward();
	}
	return 0;
}

