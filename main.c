#include <msp430.h> 

#include "Robot_Movement_Library/motorMovement.h"
#include "Robot_Sensor_Library/robotsensor.h"



int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initMotorTimer();
    initializeSensorSubsystem();

    while(1) {
  	  initializeLeftSensor();
  		if (voltageReading() > 0x299)
  			moveRobotLeft();
  		else
  			stopRobot();
    }

	return 0;
}
