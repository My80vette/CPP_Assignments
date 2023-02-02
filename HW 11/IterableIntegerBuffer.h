#pragma once
#ifndef IterableIntegerBuffer_h
#define IterableIntegetBuffer_h
#include "IntegerBuffer.h"
#include "Iterator.h"

class IterableIntegerBuffer : public IntegerBuffer {
	Iterator* temp;
public:
	friend class IntegerBuffer;
	IterableIntegerBuffer(int capacity);
	Iterator* createIterator();
};

#endif