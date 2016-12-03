#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Random{
public:
	static void seed(){ srand((unsigned)time(0)); } // 시드 설정
	static int nextInt(int min=0, int max=32767); //min과 max 사이의 랜덤 정수 리턴  
	static char nextAlphabet();  
	static double nextDouble(); // 0보다 크거나 같고 1보다 적은 실수 리턴
};

#endif