#pragma once
#include "Weight.h"
#include "Volume.h"

class Treasure {
	Weight treasureWeight; 
	Volume treasureVolume;
public:
	Treasure();
	void setWeight(double pounds);
	void setVolume(double gallons);
	bool isPure(double density, double tolerance);
	double computeDensity() { return treasureWeight.getInGrams() / treasureVolume.getInCubicCentimeters(); }
	static constexpr double GOLD = 19.3;
	static constexpr double SILVER = 10.5;
	static constexpr double ONE_PERCENT = 0.01;
	static constexpr double TENTH_PERCENT = 0.001;
};

