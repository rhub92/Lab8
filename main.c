#include <msp430.h> 

#include "Robot_Movement_Library/motorMovement.h"
#include "Robot_Sensor_Library/robotsensor.h"



int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initMotorTimer();
    initializeSensorSubsystem();

	//while (centerSensorReading() || rightSensorReading() < 0x2ff) {
		//moveRobotForward();
		while (1) {
			unsigned int centersensor = centerSensorReading();
			unsigned int rightsensor = rightSensorReading();
			unsigned int leftsensor = leftSensorReading();

			if(centersensor > 0x230)
				moveRobotSharpLeft();
			else if(leftsensor > 0x300 && centersensor < 0x230)
				moveRobotRight();
			else if (rightsensor > 0x300 && centersensor < 0x230)
				moveRobotLeft();
			else
				moveRobotForward();

		}
	return 0;
}

