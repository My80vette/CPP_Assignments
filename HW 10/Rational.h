#pragma once
#include <iostream>

class Rational {
	int numerator = 0;
	int denominator = 1;
public:
	Rational();
	Rational(int numearator, int denominator);
	operator double() const 
		{ return (double)numerator / (double)denominator; }
	friend std::ostream& operator<<(std::ostream& os, const Rational& rhs);
	Rational operator* (const Rational& rhs);
	Rational operator/ (const Rational& rhs);
	Rational operator+ (const Rational& rhs);
	Rational operator- (const Rational& rhs);
	Rational operator= (const Rational& rhs);
	bool operator== (const Rational& rhs);
	bool operator!= (const Rational& rhs);
};

