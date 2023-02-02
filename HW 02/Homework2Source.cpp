#include <iostream>
#include <iomanip>
#include <cmath>
#include "Triangle.h"
using namespace std;

Point getPointFromUser();
double distanceBetweenPoints(const Point* pt1, const Point* pt2);
void printPoint(Point pt);
Triangle getTriangleFromUser();
void printVertices(const Triangle* ptrThis);
Point getCentroid(const Triangle* ptrThis);
double getPerimeter(const Triangle* ptrThis);

int main() {
	Triangle tr;
	tr = getTriangleFromUser();
	/* printPoint(); */
	printVertices(&tr);
	getCentroid(&tr);
	getPerimeter(&tr);
	return 0;
}

Point getPointFromUser() {
	Point p;
	cout << "Enter the X and Y coordinates seperated by a space: ";
	cin >> p.x >> p.y;
	while (cin.fail()) {
		cout << "Invalid input, Try again: ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> p.x >> p.y;
	}

	return p; 
}

double distanceBetweenPoints(const Point* pt1, const Point* pt2) {
	double xDiff = pt1->x - pt2->x;
	double yDiff = pt1->y - pt2->y;
	double distance = sqrt(xDiff * xDiff + yDiff * yDiff);
	return distance;
}

void printPoint(Point pt) {
	cout << setprecision(3) << fixed
		<< "[" << pt.x << "," << pt.y << "]" << endl;
}

Triangle getTriangleFromUser() {
	Triangle tr;
	tr.vertex1 = getPointFromUser();
	tr.vertex2 = getPointFromUser();
	tr.vertex3 = getPointFromUser();
	return tr;
}

void printVertices(const Triangle* ptrThis) {
	cout << "The triangle vertices are " << setprecision(2) << fixed
		<< "[" << ptrThis->vertex1.x << "," << ptrThis->vertex1.y << "]"
		<< "[" << ptrThis->vertex2.x << "," << ptrThis->vertex2.y << "]"
		<< "[" << ptrThis->vertex3.x << "," << ptrThis->vertex3.y << "]"
		<< endl;
}

Point getCentroid(const Triangle* ptrThis) {
	Point centroid;
	centroid.x = ((ptrThis->vertex1.x + ptrThis->vertex2.x + ptrThis->vertex3.x) / 3);
	centroid.y = ((ptrThis->vertex1.y + ptrThis->vertex2.y + ptrThis->vertex3.y) / 3);
	cout << "The Centroid is [ "<< setprecision(2) << fixed << centroid.x << ", " << centroid.y << "]" << endl;
	return centroid;
}

double getPerimeter(const Triangle* ptrThis) {
	double perimeter = 0;
	perimeter += distanceBetweenPoints(&ptrThis->vertex1, &ptrThis->vertex2);
	perimeter += distanceBetweenPoints(&ptrThis->vertex2, &ptrThis->vertex3);
	perimeter += distanceBetweenPoints(&ptrThis->vertex3, &ptrThis->vertex1);
	cout << "The perimeter is " << setprecision(2) << fixed << perimeter;
	return perimeter;
}