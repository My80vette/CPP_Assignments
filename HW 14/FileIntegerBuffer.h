#pragma once

#include <string>
#include "IntegerBuffer.h"

using namespace std;

class FileIntegerBuffer : public IntegerBuffer {
public:
	FileIntegerBuffer(const int dataCapacity);
	bool store(string filename);
	bool load(string filename);
	bool operator==(IntegerBuffer& other);
};

