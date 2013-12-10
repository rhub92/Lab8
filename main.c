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



			if (rightsensor > 0x250 && centersensor < 0x250)
				moveRobotForward();
			else if(rightsensor > 0x230 && centersensor > 0x310) {
				moveRobotSharpLeft();
				_delay_cycles(750000);
			}
			//else if(rightsensor < 0x250 && centersensor < 0x250)
				//moveRobotSharpRight();
			else
				moveRobotForward();


		//}

		}
	return 0;
}

