#include <iostream>
#include <string>
#include "Temperature.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
// Function: getTemperatureFromUser
// Purpose: Prompt user for a temperature and put it in the argument object
// Parameter: temperatureObject is a pointer to a Temperature object
// Returns: nothing
//

int main() {
	Temperature temperatureObject;
	getTemperatureFromUser(&temperatureObject);
	cout << "The temperature in Celsius is " << temperatureObject.getTempInCelsius();
	cout << "\nThe temperature in Fahrenheit is " << temperatureObject.getTempInFahrenheit();
	cout << "\nThe temperature in Kelvin is " << temperatureObject.getTempInKelvin();
	return 0;
}

void getTemperatureFromUser(Temperature* temperatureObject) {
	double amount = 0.0; // this is the user's input for the temperature
	string units = " "; // this is a string, but we only use the first letter
	bool goodInput = false; // this is a flag to stay in the "try-again" loop
	// Space the text over so it looks kind of centered
	cout << " I will ask you for a temperature and its units.\n";
	cout << " For example, your input might be \"98.6 F\".\n";
	// Use new line characters instead of endl since the last cout has endl.
	cout << "Use C for Celsius, F for Fahrenheit, K for Kelvin.\n" << endl;
	do {
		cout << "Enter a temperature followed by the units: ";
		cin >> amount >> units;
		if (cin.fail()) {
			// clear all artifacts of the failed input
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "I'm sorry. Your input failed. Please try again." << endl;
			// "continue" means skip rest of code block for the containing loop
			goodInput = false;
		}
		else
			goodInput = true;
		if (goodInput) {
			// Use a switch statement to select among one letter responses
			// C++ string operator [] returns the letter in that position
			switch (units[0]) {
				// The choices are character constants (not strings), hence '
			case 'C':
			case 'c':
				temperatureObject->setTempAsCelsius(amount);
				// "case" represents a starting point for execution
				// If you don't want to continue further, use "break"
				break;
			case 'F':
			case 'f':
				temperatureObject->setTempAsFahrenheit(amount);
				break;
			case 'K':
			case 'k':
				temperatureObject->setTempAsKelvin(amount);
				break;
			default:
				cout << "The type was not recognizable as C, F, or K." << endl;
				goodInput = false;
			}
		}
		// If we make it to here without changing notDone, we are done.
	} while (!goodInput);
}