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
    void print(int numberOfColumns, int columnWidth) const;
    int getCapacity() const { return dataCapacity; }
    int getLength() const { return dataLength; }
    bool compare(const IntegerBuffer& other) const;
    int copy(const IntegerBuffer& other);
    int copy(const int* arr, int arrLength);
};