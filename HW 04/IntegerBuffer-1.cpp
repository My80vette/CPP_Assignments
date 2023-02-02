#include "IntegerBuffer.h"
#include <iomanip>
#include <iostream>
using namespace std;

IntegerBuffer::IntegerBuffer() {
	data[dataCapacity];
	dataLength = 0;
}

void IntegerBuffer::clear() {
	data[0] = (NULL);
	dataLength = 0;
}

int IntegerBuffer::add(int value) {
	if (dataLength < dataCapacity) {
		data[dataLength] = value;
		++dataLength;
		return dataLength;
	}
	return 0;
}

int IntegerBuffer::add(const int array[], int arrayLength) {
	int i;
	int sum = 0;
	for (i = 0; i < this->dataCapacity && i < arrayLength; ++i) {
		this->data[i] = array[i];
	}
	return i;
}

int IntegerBuffer::removeFast(int index) {
	if (index >= 0 && index < dataLength) {
		data[index] = data[dataLength - 1];
		--dataLength;
		return 1;
	} else {
		return 0;
	}
}

int IntegerBuffer::removeStable(int index) {
	int i;
	if (index >= 0 && index < dataLength) {
		for (i = index; i < dataLength; ++i) {
			data[i] = data[i + 1];
		}
		--dataLength;
		return 1;
	} else {
		return 0;
	}
}

int IntegerBuffer::index(int value) const {
	int i;
	for (i = 0; i <= dataLength; ++i) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

int IntegerBuffer::rindex(int value) const {
	int i;
	for (i = dataLength - 1; i >= 0; --i) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

void IntegerBuffer::print(int numberOfColumns, int columnWidth) const {
	int i;
	for (i = 0; i < dataLength; ++i) {
		if (i % numberOfColumns == 0 && i > 0) {
			cout << endl;
		}
		cout << setw(6) << data[i] << "  ";
	}
	cout << endl;
}