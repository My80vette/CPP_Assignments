#ifndef INTEGER_BUFFER_ITERATOR_H
#define INTEGER_BUFFER_ITERATOR_H
#include "Iterator.h"

class IterableIntegerBuffer;

class IntegerBufferIterator : public Iterator {
protected:
	IterableIntegerBuffer* collection;
	int cursor;
public:
	IntegerBufferIterator(IterableIntegerBuffer* collection);
	void first() override;
	void next() override;
	bool isDone() override;
	int currentItem() override;
};
#endif

