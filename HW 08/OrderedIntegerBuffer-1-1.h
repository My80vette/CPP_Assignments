#pragma once
#include "IntegerBuffer.h"

class OrderedIntegerBuffer : public IntegerBuffer {
public:
    virtual int add(int value);
    inline int add(const int array[], int arrayLength);
    inline int removeFast(int index);
};

inline int OrderedIntegerBuffer::add(const int array[], int arrayLength) {
    int i = 0;
    int count = 0;
    for (i = 0; i < arrayLength; ++i)
        count += add(array[i]);
    return count;
};

int OrderedIntegerBuffer::removeFast(int index) {
    return IntegerBuffer::removeStable(index);
};
