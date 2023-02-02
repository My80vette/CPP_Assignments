#include <iostream>
#include "IterableIntegerBuffer.h"
#include "IntegerBufferIterator.h"

IterableIntegerBuffer::IterableIntegerBuffer(int capacity) : IntegerBuffer(capacity) {
}

Iterator* IterableIntegerBuffer::createIterator() {
	Iterator* iter = new IntegerBufferIterator(this);
	return iter;
}