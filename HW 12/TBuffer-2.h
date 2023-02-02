#ifndef TBuffer_h
#define TBuffer_h
#pragma once
using namespace std;

template <class T, int num>
class TBuffer {
protected:
    static const int dataCapacity = num;
    T data[dataCapacity];
    int dataLength;
    T nullValue;
public:
    TBuffer(T nullValue) {
        dataLength = 0;
        this->nullValue = nullValue;
    }

    template <class T, int num>
    T add(int value) {
        if (dataLength < dataCapacity) {
            data[dataLength] = value;
            ++dataLength;
            return 1;
        }
        else {
            return 0;
        }
    }

    template <class T, int num>
    T add(const T array[], int dataLength) {
        int count = 0;
        for (int i = 0; i < dataLength; ++i) {
            count += add(data[i]);
        }
        return count;
    }

    template <class T, int num>
    void print() const {
        for (int i = 0; i < dataLength; ++i) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }

    template <class T, int num>
    T sum() {
        T sum;
        for (int i = 0; i < dataLength; ++i) {
            sum += data[i];
        }
        return sum;
    }

    const int getDataLength() { return dataLength; }
};
#endif