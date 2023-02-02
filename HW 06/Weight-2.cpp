#include "Weight.h"

void Weight::setInPounds(double pounds) {
	this->pounds = pounds;
}

double Weight::getInGrams() {
	return (this->pounds * 453.592);
}
