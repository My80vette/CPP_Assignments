#include <fstream>
#include <iostream>
#include <iomanip>
#include "FileIntegerBuffer.h"
using namespace std;

FileIntegerBuffer::FileIntegerBuffer(const int dataCapacity) {
	dataLength = 0;
}

bool FileIntegerBuffer::store(string filename) {
	ofstream outFile;
	outFile.open(filename);
	if (outFile.is_open()) {
		for (int i = 0; i < dataLength; ++i) {
			if (i != 0 && i % 10 == 0) {
				outFile << "\n";
			}
			outFile << setw(6) << this->data[i];
		}
		outFile << endl;
		outFile.close();
		return true;
	}
	else {
		cout << "Unable To Open" << endl;
		return false;
	}
}

bool FileIntegerBuffer::load(string filename) {
	ifstream inFile;
	inFile.open(filename);
	if (inFile.is_open() == 1) {
		int data;
		while (inFile >> data) {
			this->add(data);
		}
		inFile.close();
		return true;
	}
	else {
		cout << "Unable To Open" << endl;
		return false;
	}
}

bool FileIntegerBuffer::operator==(IntegerBuffer& other) {
	for (int i = 0; i < dataLength; ++i) {
		if (data[i] != other.getDataValue(i)) {
			return false;
		}
	}
	return true;
}
