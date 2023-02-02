#include <iostream>
#include <iomanip>
#include <new>
#include "IntegerBuffer.h"
using namespace std;

IntegerBuffer::IntegerBuffer(int dataCapacity) {
	this->dataLength = 0;
	try {
		this->dataCapacity = dataCapacity;
		this->data = new int[dataCapacity];
	}
	catch (const std::bad_alloc) {
		this->data = nullptr;
		this->dataCapacity = 0;
	}
}

IntegerBuffer::~IntegerBuffer() {
	dataLength = 0;
	if (data != nullptr) {
		int* memory = data;
		data = nullptr;
		delete [] memory;
	}
}


void IntegerBuffer::clear() {
	this->dataLength = 0;
}

int IntegerBuffer::add(int value) {
	if (dataLength < dataCapacity) {
		data[dataLength] = value;
		++dataLength;
		return 1;
	}
	return 0;
}

int IntegerBuffer::add(const int array[], int arrayLength) {
	int i = 0;
	int sum = 0;
	for (i = 0; i < this->dataCapacity && i < arrayLength; ++i)
		add(array[i]);
	return i;
}

int IntegerBuffer::removeFast(int index) {
	if (index >= 0 && index < dataLength) {
		data[index] = data[dataLength - 1];
		--dataLength;
		return 1;
	}
	else {
		return 0;
	}
}


int IntegerBuffer::rindex(int value) {
	int i = 0;
	for (i = dataLength - 1; i >= 0; --i) {
		if (data[i] == value)
			return i;
	}
	return -1;
}

void IntegerBuffer::print(int numberOfColumns, int columnWidth) const {
	int i = 0;
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
		add(other->data, other->dataLength);
		return 1;
	}
	else 
	return 0;
}

IntegerBuffer* IntegerBuffer::clone() const {
	return new IntegerBuffer(*this);
	return nullptr;
}

bool IntegerBuffer::compare(const IntegerBuffer* other) const {
	int i = 0;
	if (dataLength == other->dataLength) {
		for (i = 0; i < dataLength; ++i) {
			if (data[i] == other->data[i]) {
				return false;
			}
		}
		return true;
	}
	else
		return false;
}
