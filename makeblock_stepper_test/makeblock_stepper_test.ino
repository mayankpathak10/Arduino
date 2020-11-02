// This code successfully runs the stepper motor at 9000 steps per sec.
// Library used: http://learn.makeblock.com/en/learning-arduino-programming/
// Sample code: https://www.makeblock.com/project/2h-microstep-driver
// Motor Driver: Makeblock 2H stepper driver


#include "MeOrion.h"
#include <SoftwareSerial.h>
#include <Wire.h>
#include <AccelStepper.h>

int dirPin = 2;
int stpPin = 3;

AccelStepper stepper(AccelStepper::DRIVER, stpPin, dirPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  stepper.setMaxSpeed(9000);
  stepper.setAcceleration(20000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char a = Serial.read();
    switch(a)
    {
      case '0':
          stepper.move(3000);
          break;
          
      case '1':
          stepper.move(3000);
          break;
          
      case '2':
          stepper.move(3000);
          break;
          
      case '3':
          stepper.move(3000);
          break;
    }
  }
  stepper.run();
}
