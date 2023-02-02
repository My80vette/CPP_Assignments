#include "IntegerBuffer.h"
#include <iomanip>
#include <iostream>
#include <array>
using namespace std;


IntegerBuffer::IntegerBuffer() {
	dataLength = 0;
}

void IntegerBuffer::clear() {
	dataLength = 0;
}

int IntegerBuffer::add(int value) {
	if (dataLength < dataCapacity) {
		data[dataLength] = value;
		++dataLength;
		return 1;
	}
	else
	return 0;
}

int IntegerBuffer::add(const int array[], int arrayLength) {
	int i;
	int sum = 0;
	for (i = 0; i < dataCapacity && i < arrayLength; ++i) {
		sum += add(array[i]);
	}
	return sum;
}

int IntegerBuffer::removeFast(int index) {
	if (index >= 0 && index < dataLength) {
		--dataLength;
		data[index] = data[dataLength];
		return 1;
	} else {
		return 0;
	}
}

int IntegerBuffer::removeStable(int index) {
	int i;
	if (index >= 0 && index < dataLength) {
		--dataLength;
		for (i = index; i < dataLength; ++i) {
			data[i] = data[i + 1];
		}
		return 1;
	} else {
		return 0;
	}
}

int IntegerBuffer::index(int value) const {
	int i;
	for (i = 0; i < dataLength; ++i) {
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
		cout << setw(columnWidth) << data[i];
	}
	cout << endl;
}

int IntegerBuffer::copy(const IntegerBuffer* other) {
	if (this != other) {
		clear();
		return add(other->data, other->dataLength);
	}
	else
		return 0;
}

bool IntegerBuffer::compare(const IntegerBuffer* other) {
	int i = 0;
	if (this->dataLength == other->dataLength) {
		for (i = 0; i < dataLength; ++i) {
			if (this->data[i] == other->data[i]) {
				return true;
			}
		}
	}
	else 
		return false;
	}