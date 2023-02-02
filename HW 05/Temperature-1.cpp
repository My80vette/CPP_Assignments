#include "Temperature.h"

void Temperature::setTempAsCelsius(double temp) {
	tempInCelsius = temp;
}

void Temperature::setTempAsFahrenheit(double temp) {
	tempInCelsius = ((temp - 32) * (5 / 9));
}

void Temperature::setTempAsKelvin(double temp) {
	tempInCelsius = (temp - 273.15);
}
