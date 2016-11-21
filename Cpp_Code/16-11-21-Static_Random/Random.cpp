#include "Random.h"

int Random::nextInt(int min, int max){
	return rand() % max + min;
}

char Random::nextAlphabet(){
	int n = 'A' + (rand() % 52 + 0);
	if (n > 'Z'){
		return 'a' + (rand() % 26 + 0);
	}
	return n;
}

double Random::nextDouble(){
	return (rand() % 1000 + 0)*0.001;
}