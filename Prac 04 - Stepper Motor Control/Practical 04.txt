// Stepper motor using the arduino stepper library, add the Stepper library in LibraryManager before starting.
#include <Stepper.h>

const int stepsPerRevolution = 200;  // steps to complete 1 cycle

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 30 rpm:
  myStepper.setSpeed(30);
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in clockwise direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the counterclockwise direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}