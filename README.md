Lab8
====

Contains the algorithm to make the robot move through the maze without hitting the wall. This algorithm was created
through the use of my previously created libraries for robot movement and robot sensors.

## Functions for Robot Movement

- `void initMotorTimer()`
    - Initializes the timer on the robot

- `void leftMotorForward()`
    - moves the left motor forward

- `void rightMotorForward()`
   - moves the right motor forward

- `void leftMotorBackwards()`
    - moves the left motor backwards

- `void rightMotorBackwards()`
    - moves the right motor backwards

- `void moveRobotForward()`
    - moves the robot forward

- `void moveRobotBackwards()`
    - moves the robot backwards

- `void moveRobotSharpLeft()`
    - makes the robot do a sharp turn left

- `void moveRobotSharpRight()`
    - makes the robot do a sharp turn right

- `void moveRobotLeft()`
    - makes the robot turn left

- `void moveRobotRight()`
    - makes the robot turn right

- `void stopRobot()`
    - stops the robot
    
## Functions for robot sensors

- `void initializeSensorSubsystem()`
    - Initializes the subsystem for the sensors on the robot

- `void leftSensorReading()`
    - returns the value from the left sensor

- `unsigned int rightSensorReading()`
   - returns the value from the right sensor
