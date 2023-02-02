#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;


int main() {
	Triangle tr;
	tr.enter();
	tr.print();
	cout << "\nThe centroid is: ";
	tr.getCentroid().print();
	cout << "\nThe perimeter is: " << tr.getPerimeter();
	return 0;
}

