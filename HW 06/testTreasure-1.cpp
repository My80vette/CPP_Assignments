#include <iostream>
#include <iomanip>
#include "Treasure.h"
#include "Volume.h"
#include "Weight.h"
using namespace std;

int main() {
	Treasure t;
	Weight w;
	Volume v;
	double weight;
	double volume;
	double density;
	cout << "Ener the weight in pounds: ";
	cin >> weight;
	cout << "Enter the volume in gallons: ";
	cin >> volume;
	t.setWeight(weight);
	t.setVolume(volume);
	density = t.computeDensity();
	cout << "The density is: " << density << endl;
	if (t.isPure(density, 0.01) == true)
		cout << "This is real gold" << endl;
	else if (t.isPure(t.computeDensity(), 0.01) == false)
		cout << "This is not real gold" << endl;
	else
		cout << "failed";
	return 0;
}