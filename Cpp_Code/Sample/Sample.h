#ifndef SAMPLE_H
#define SAMPLE_H
#include <iostream>

using namespace std;

class Sample{
	int *p;
	int size;
public:
	Sample(int n){ // ������
		size = n;
		p=new int [n]; // n�� ���� �迭�� ���� ����
	}
	void read(); // 100 600 199 605 10
	void write();
	int big();
	~Sample();

	/*
	~Sample(){
		delete[] p;
	}*/
};
#endif