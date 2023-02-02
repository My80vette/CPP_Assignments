//#pragma once
#ifndef Triangle_h
#define Triangle_h
#include "Point.h"


class Triangle {
	Point vertex1;
	Point vertex2;
	Point vertex3;
public:
	void enter();
	void print();
	Point getCentroid();
	double getPerimeter();
};

#endif