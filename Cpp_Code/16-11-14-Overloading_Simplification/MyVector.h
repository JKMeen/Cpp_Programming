#include <iostream>
using namespace std;

class MyVector{
	int *p;
	int size;
public:
	// ������ ũ��, ���Ϳ� ������ �ʱ�ȭ ��
	MyVector(int n=100, int num=1);
	void show();
	~MyVector();
};