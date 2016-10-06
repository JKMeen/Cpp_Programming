#ifndef RANDOM_H
#define RANDOM_H
#include <stdlib.h>
#include <time.h>

class Random{
	int num1, num2;
public:
	Random();
	int next();
	int nextlnRange(int a, int b);
};

#endif