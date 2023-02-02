#include "STLIntegerBuffer.h"

using namespace std;

STLIntegerBuffer::Iterator::Iterator(STLIntegerBuffer* target, int cursor) {
	this->target = target;
	this->cursor = cursor;
}

bool STLIntegerBuffer::Iterator::operator==(const Iterator& rhs) const {
	if (this->cursor == rhs.cursor) {
		return true;
	}
	else {
		return false;
	}
}

bool STLIntegerBuffer::Iterator::operator!=(const Iterator& rhs) const {
	if (this->cursor != rhs.cursor) {
		return true;
	}
	else {
		return false;
	}
}

STLIntegerBuffer::Iterator& STLIntegerBuffer::Iterator::operator++() {
	++cursor;
	return *this;
}

STLIntegerBuffer::Iterator STLIntegerBuffer::Iterator::operator++(int) {
	int originalCursorValue = 0;
	originalCursorValue = cursor;
	++cursor;
	return *this;
}

int& STLIntegerBuffer::Iterator::operator*() {
	return this->cursor;
}

STLIntegerBuffer::Iterator STLIntegerBuffer::begin() {
	return STLIntegerBuffer::Iterator(this, 0);
}

STLIntegerBuffer::Iterator STLIntegerBuffer::end() {
	return STLIntegerBuffer::Iterator(this, this->data[dataLength - 1]);
}
