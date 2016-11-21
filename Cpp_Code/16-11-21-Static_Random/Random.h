#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Random{
public:
	static void seed(){ srand((unsigned)time(0)); } // �õ� ����
	static int nextInt(int min=0, int max=32767); //min�� max ������ ���� ���� ����  
	static char nextAlphabet();  
	static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� �Ǽ� ����
};

#endif