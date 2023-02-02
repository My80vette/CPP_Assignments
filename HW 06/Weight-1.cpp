#include "Weight.h"

Weight::Weight() {
	this->pounds = 0.0;
}

void Weight::setInPounds(double pounds) {
	this->pounds = pounds;
}

double Weight::getInGrams() {
	return (this->pounds * 453.592);
}
