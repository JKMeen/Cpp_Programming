#ifndef ACCUMULATOR
#define ACCUMULATOR

#include <iostream>
using namespace std;

class Accumulator{
	int value;

public:
	Accumulator(int v) { value = v; };
	Accumulator& add( int v );
	int get() { return value; };
	~Accumulator(){};
};

#endif