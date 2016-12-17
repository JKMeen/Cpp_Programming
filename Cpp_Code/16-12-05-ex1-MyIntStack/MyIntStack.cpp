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
} //정수n을스택에푸시한다.
//스택이꽉차있으면false를,아니면true리턴

bool MyIntStack::pop(int &n){
	if (tos > 0){
		tos--;
		n = this->p[tos];
		return true;
	}
	return false;
} //스택의 탑에 있는 값을 n에 팝한다.
//만일스택이비어있으면false를,아니면true리턴