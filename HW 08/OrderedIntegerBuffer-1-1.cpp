#include "OrderedIntegerBuffer.h"

int OrderedIntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        int i = 0;
        int j = dataLength;
        for (i = 0; i < dataLength && data[i] < value; ++i);
        for (int j = dataLength; j > i; --j)
            data[j] = data[j - 1];
        data[i] = value;
        ++dataLength;
        return 1;
    }
    else
        return 0;
}
