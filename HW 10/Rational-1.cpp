#include "Rational.h"

Rational::Rational() {
	this->numerator = 0;
	this->denominator = 1;
}

Rational::Rational(int numearator, int denominator) {
	if (denominator == 0) {
		this->numerator = 0;
		this->denominator = 1;
	}
	else {
		this->numerator = numerator;
		this->denominator = denominator;
	}
}

Rational Rational::operator*(const Rational& rhs) {
	Rational temp;
	temp.numerator = (this->numerator * numerator);
	temp.denominator = (this->denominator * denominator);
	return temp;
}

Rational Rational::operator/(const Rational& rhs) {
	Rational temp;
	temp.numerator = (this->numerator * rhs.denominator);
	temp.denominator = (this->denominator * rhs.numerator);
	return temp;
}

Rational Rational::operator+(const Rational& rhs) {
	Rational temp;
	temp.numerator = ((this->numerator * rhs.denominator) +
		(rhs.numerator * this->denominator));
	temp.denominator = ((this->denominator * rhs.denominator));
	return temp;
}

Rational Rational::operator-(const Rational& rhs) {
	Rational temp;
	temp.numerator = ((this->numerator * rhs.denominator) -
		(rhs.numerator * this->denominator));
	temp.denominator = ((this->denominator * rhs.denominator));
	return temp;
}

Rational Rational::operator=(const Rational& rhs) {
	this->numerator = rhs.numerator;
	this->denominator = rhs.denominator;
	return Rational();
}

bool Rational::operator==(const Rational& rhs) {
	if (this->numerator == rhs.numerator)
		return true;
	else 
		return false;
}

bool Rational::operator!=(const Rational& rhs)
{
	if (this->numerator != rhs.numerator)
		return true;
	else
		return false;
}

std::ostream& operator<<(std::ostream& os, const Rational& rhs) {
	os << rhs.numerator << " " << rhs.denominator;
	return { os };
}
