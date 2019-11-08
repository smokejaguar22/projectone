/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#import "iostream"
#include "subsystems/DriveTrain.h"


DriveTrain::DriveTrain() : Subsystem("DriveTrain"), left(new TalonSRX(2)), right(new TalonSRX(3)) {}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  SetDefaultCommand(new TankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void tankDrive(double leftInput, double rightInput){

double leftPower = leftInput;
double rightPower = rightInput;


left->Set(ControlMode::PercentOutput, -leftPower);
right->Set(ControlMode::PercentOutput, rightPower);




// std.endl<<leftPower<<
// std.endl<<rightPower<<
}