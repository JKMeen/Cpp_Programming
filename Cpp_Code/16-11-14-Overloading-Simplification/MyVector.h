#include <iostream>
using namespace std;

class MyVector{
	int *p;
	int size;
public:
	// 벡터의 크기, 벡터에 들어가야할 초기화 값
	MyVector(int n=100, int num=1);
	void show();
	~MyVector();
};