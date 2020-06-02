#include "ACS773.h"

/*
  This example shows how to set zero point of your sensor
*/

// We have 50 amps version sensor connected to A1 pin of arduino
// Replace with your version if necessary
ACS773 sensor(ACS773LCB_050B, A1);

void setup() {
  Serial.begin(9600);

  // Value obtained using sensor.calibrate() when no current flows through the sensor
  sensor.setZeroPoint(438);
}

void loop() {}
