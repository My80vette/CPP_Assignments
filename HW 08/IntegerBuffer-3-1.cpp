#include <iostream>
#include <iomanip>
#include <array>
#include "IntegerBuffer.h"
using namespace std;

IntegerBuffer::IntegerBuffer() {
    dataLength = 0;
}

void IntegerBuffer::clear() {
    dataLength = 0;
}

int IntegerBuffer::add(int value) {
    if (dataLength < dataCapacity) {
        data[dataLength] = value;
        ++dataLength;
        return 1;
    }
    else
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

int IntegerBuffer::removeStable(int index) {
    if (index < dataLength && index >= 0) {
        --dataLength;
        for (index = index; index < dataLength; ++index) {
            data[index] = data[index + 1];
        }
        return 1;
    }
    else
        return 0;
}

int IntegerBuffer::index(int value) const {
    int i = 0;
    for (i = 0; i < dataLength; ++i) {
        if (data[i] == value)
            return i;
    }
    return -1;
}

int IntegerBuffer::rindex(int value) const {
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

void IntegerBuffer::copy(const IntegerBuffer* other) {
    if (this != other) {
        clear();
        add(other->data, other->dataLength);
    }
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
