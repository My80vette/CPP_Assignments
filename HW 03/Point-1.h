#pragma once

class Point {
	double x;
	double y;
public:
	void enter();
	void print();
	double getDistanceTo(Point that);
	double getDistanceTo(const Point *that);
	double getX() {return x;}
	double getY() {return y;}
	void setX(double x) { this->x = x; } 
	void setY(double y) { this->y = y; }
	//I shouldnt need a pointer to the class here becuase the function can access the variables
	//But the compiler was telling me that the variables werent recognised and my centroid was
	//coming up as -9 trillion for both x and y values
};