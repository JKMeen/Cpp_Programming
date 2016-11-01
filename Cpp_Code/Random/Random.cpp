#include "Random.h"
#define RAND_MAX 32767

Random::Random(){
	srand((unsigned int)time(NULL));
}

int Random::next(){
	return rand() % RAND_MAX;
}

int Random::nextlnRange(int a, int b){
	this->num1 = a;
	this->num2 = b-1;
	return rand() % this->num2+this->num1;
}