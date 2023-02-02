#pragma once
class Temperature {
	double temp = 0.0;
	double tempInCelsius = 0.0;
public:
	void setTempAsCelsius(double temp);
	void setTempAsFahrenheit(double temp);
	void setTempAsKelvin(double temp);
	double getTempInFahrenheit() const { return ((tempInCelsius * 9 / 5) + 32); }
	double getTempInCelsius() const { return tempInCelsius; }
	double getTempInKelvin() const { return (tempInCelsius + 273.15); }
};

