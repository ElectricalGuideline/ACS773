#ifndef ACS773_h
#define ACS773_h

#include <Arduino.h>

#define ADC_SCALE 1023.0
#define VREF 5.0
#define DEFAULT_FREQUENCY 50

enum ACS773_type {ACS773LCB_050B, ACS773LCB_100B, ACS773KCB_150B, ACS773ECB_200B, ACS773ECB_250U};

class ACS773 {
public:
	ACS773(ACS773_type type, uint8_t _pin);
	int calibrate();
	void setZeroPoint(int _zero);
	void setSensitivity(float sens);
	float getCurrentDC();
	float getCurrentAC();
	float getCurrentAC(uint16_t frequency);

private:
	float zero = 512.0;
	float sensitivity;
	uint8_t pin;
};

#endif