#include "MyIntStack.h"

MyIntStack::MyIntStack(int size){
	this->p = new int[size];
	this->size = size;
	this->tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s){
	this->size = s.size;
	this->tos = s.tos;
	this->p = new int[s.size];
	for (int i=0; i<s.size; i++){
		this->p[i] = s.p[i];
	}
}
MyIntStack::~MyIntStack(){
	delete[] this->p;
}

bool MyIntStack::push(int n){
	if (this->tos < size){
		tos++;
		this->p[tos] = n;
		return true;
	}
	return false;
} //����n�����ÿ�Ǫ���Ѵ�.
//�����̲���������false��,�ƴϸ�true����

bool MyIntStack::pop(int &n){
	if (tos > 0){
		tos--;
		n = this->p[tos];
		return true;
	}
	return false;
} //������ ž�� �ִ� ���� n�� ���Ѵ�.
//���Ͻ����̺��������false��,�ƴϸ�true����