#include "projectName.h"

class projectName : public IterativeRobot
{
public:
    projectName() {                             //Initialize everything here
        //Create your motor controllers, compressors, drivetrain, etc. here
    }
    
	void RobotInit() {                          //Runs once when robot is turned on
		//Typically not necessary to use.  In the past we have used it to update the lcd once in the beginning
	}
	
	void DisabledInit() {                       //Runs once in the beginning of disabled mode (connected to FMS)
		//Typically not used.  Can initialize local variables to disabled...
	}
	
	void AutonomousInit() {                     //Runs once in the beginning of autonomous mode
		//Reset timers, initialize variables, etc.
	}
	
	void TeleopInit() {                         //Runs once in the beginning of teleoperated mode
		//Reset timers, initialize variables, etc.
	}
	
	void DisabledPeriodic() {                   //Runs periodically during disabled mode (connected to FMS)
		//Can be used to check for input from controllers (i.e. different settings: 2 shots, 3 shots, etc.)
	}
	
	void AutonomousPeriodic() {                 //Runs periodically during autonomous mode
        //Used to run autonomous code
	}
	
	void TeleopPeriodic() {                     //Runs periodically during teleoperated mode
		//Used to run teleoperated code (i.e. input from controllers, output to motors, etc.)
	}
};

START_ROBOT_CLASS(projectName);
