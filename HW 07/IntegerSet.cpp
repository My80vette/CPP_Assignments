#include "IntegerSet.h"

int IntegerSet::add(int value) {
    if (index(value) == -1 && dataLength<dataCapacity) {
        return IntegerBuffer::add(value);
    }
    else { 
        return 0;
    }
}

int IntegerSet::add(const int array[], int arrayLength) {
    int count = 0;
    for (int i = 0; i < arrayLength; ++i)
        count += add(array[i]);
    return count;
}
