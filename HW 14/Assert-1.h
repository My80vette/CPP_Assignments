#pragma once
#include <iostream>
#include <string>
using namespace std;

class Assert {
public:
	static void isTrue(bool actual) {
		if (actual == 1)
			cout << "Ok" << endl;
		else
			cout << "Failed" << endl;
	}

	static void isFalse(bool actual) {
		if (actual == 0)
			cout << "Ok" << endl;
		else
			cout << "Failed" << endl;
	}

	static void equals(int expected, int actual) {
		if (expected == actual)
			cout << "Ok" << endl;
		else
			cout << "Failed" << endl;
	}

	static void equals(string expected, string actual) {
		if (expected.compare(actual) == 0)
			cout << "Ok" << endl;
		else
			cout << "Failed" << endl;
	}
};
