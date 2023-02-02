#include "Volume.h"

Volume::Volume() {
	this->gallons = 0.0;
}

void Volume::setInGallons(double gallons) {
	this->gallons = gallons;
}

double Volume::getInCubicCentimeters() {
	return (this->gallons * 3785.41);
}
