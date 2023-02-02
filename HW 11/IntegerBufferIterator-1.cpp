#include <iostream>
#include "IntegerBufferIterator.h"
#include "IntegerBuffer.h"
#include "IterableIntegerBuffer.h"

IntegerBufferIterator::IntegerBufferIterator(IterableIntegerBuffer* collection) {
	this->collection = collection;
	cursor = 0;
}

void IntegerBufferIterator::first() {
	cursor = 0;
}

void IntegerBufferIterator::next() {
	++cursor;
}

bool IntegerBufferIterator::isDone() {
	if (cursor == collection->getLength())
		return true;
	else
		return false;
}

int IntegerBufferIterator::currentItem() {
	return collection->data[cursor];
}
