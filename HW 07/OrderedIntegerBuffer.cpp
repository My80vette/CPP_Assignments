#include "OrderedIntegerBuffer.h"

int OrderedIntegerBuffer::add(int value) {
    if (dataLength == dataCapacity) {
        return 0;
    }
    else {
        int i = 0;
        int j = dataLength;
        for (i = 0; i < dataLength && data[i] < value; ++i);
        for (int j = dataLength; j > i; --j)
            data[j] = data[j - 1];
        data[i] = value;
        ++dataLength;

        return 1;
    }
}
int OrderedIntegerBuffer::removeFast(int index) {
    return IntegerBuffer::removeStable(index);
    return 0;
}

int OrderedIntegerBuffer::add(const int array[], int arrayLength) {
    int count = 0;
    for (int i = 0; i < arrayLength; ++i)
        count += add(array[i]);
    return count;
}