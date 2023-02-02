#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Triangle.h"
#include "Point.h"
using namespace std;

void Triangle::enter() {
	vertex1.enter();
	vertex2.enter();
	vertex3.enter();
}

void Triangle::print() {
	
	cout << "The triangle vertices are " << setprecision(2) << fixed;
	vertex1.print();
	vertex2.print();
	vertex3.print();
	cout << endl;
}

Point Triangle::getCentroid() {
	Point centroid;
	centroid.setX((vertex1.getX() + vertex2.getX() + vertex3.getX()) / 3);
	centroid.setY((vertex1.getY() + vertex2.getY() + vertex3.getY()) / 3);
	return centroid;
}

double Triangle::getPerimeter() {
	double perimeter = 0.0;
	double sideOne = 0.0;
	double sideTwo = 0.0;
	double sideThree = 0.0;
	sideOne = vertex1.getDistanceTo(vertex2);
	sideTwo = vertex2.getDistanceTo(vertex3);
	sideThree = vertex3.getDistanceTo(vertex1);
	perimeter = sideOne + sideTwo + sideThree;
	return perimeter;
}