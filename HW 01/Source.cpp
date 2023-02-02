#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int year = 0;
	int day = 0;
	double pi = 0;
	string month;
	string name;
	cout << "Enter the year: ";
	cin >> year;
	while (cin.fail()) {
		cout << "Invalid input, try again: ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> year;
	}

	cout << "Enter the day of the month: ";
	cin >> day;
	while (cin.fail()) {
		cout << "Invalid input, try again ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> day;
	}

	cout << "Enter as much of pi as you remember: ";
	cin >> pi;
	while (cin.fail()) {
		cout << "Invalid input, try again ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> pi;
	}

	cout << "Enter the month: ";
	cin >> month;
	while (cin.fail()) {
		cout << "Invalid input, try again ";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> month;
	}

	cout << "Enter your full name: ";
	cin.ignore(999, '\n');
	getline(cin, name);
	while (cin.fail()) {
		cout << "Invalid input, try again ";
		cin.clear();
		cin.ignore(999, '\n');
		getline(cin, name);
	}

	cout << month << " " << day << " " << year << endl;
	cout << setprecision(4) << pi << endl;
	cout << setprecision(5) << pi << endl;
	cout << setprecision(6) << pi << endl;
	cout << "Welcome to CS125 " << name << "!" << endl;

	return EXIT_SUCCESS;
} 