#pragma once

class IntegerBuffer {
protected:
    int dataCapacity;
    int* data;
    int dataLength;
public:
    IntegerBuffer(int dataCapacity);
    IntegerBuffer();
    ~IntegerBuffer();
    IntegerBuffer(const IntegerBuffer& other);
    IntegerBuffer* clone();
    void clear();
    int add(int value);
    int add(const int* array, int arrayLength);
    int removeFast(int index);
    int removeStable(int index);
    int index(int value) const;
    int rindex(int value) const;
    void print() const;
    inline int getCapacity() const { return dataCapacity; }
    inline int getLength() const { return dataLength; }
    inline int getDataValue(int index) const { return data[index]; }
    bool compare(const IntegerBuffer& other) const;
    int copy(const IntegerBuffer& other);
    int copy(const int* arr, int arrLength);
};