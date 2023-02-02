#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include "Point.h"
#include "Triangle.h"
using namespace std;

void Point::enter() {
	cout << "Enter your x and y seperated by a space ";
	cin >> x >> y;
	while (cin.fail()) {
		cout << "Try again: ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> x >> y;
	}
}

void Point::print() {
	cout << "[" << setprecision(2) << fixed << x << "," << y << "]";
}

double Point::getDistanceTo(Point that) {
	double xDif = that.x - x;
	double yDif = that.y - y;
	double distance = sqrt(xDif * xDif + yDif * yDif);
	return distance;
}

double Point::getDistanceTo(const Point *that) {
	double xDif = that->x - x;
	double yDif = that->y - y;
	double distance = sqrt(xDif * xDif + yDif * yDif);
	return distance;
}