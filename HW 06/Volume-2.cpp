#include "Volume.h"

void Volume::setInGallons(double gallons) {
	this->gallons = gallons;
}

double Volume::getInCubicCentimeters() {
	return (this->gallons * 3785.41);
}
