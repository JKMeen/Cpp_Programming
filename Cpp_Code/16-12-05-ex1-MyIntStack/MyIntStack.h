#include <iostream>
using namespace std;

class MyIntStack{
	int *p;//���ø޸𸮷λ����������
	int size;//�������ִ�ũ��
	int tos;//������ž������Ű���ε���
public:
	MyIntStack(int size=10);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);//����n�����ÿ�Ǫ���Ѵ�.
	//�����̲���������false��,�ƴϸ�true����
	bool pop(int &n);//������ž���ִ°���n�����Ѵ�.
	//���Ͻ����̺��������false��,�ƴϸ�true����
};