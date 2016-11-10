#include "MyIntStack.h"

MyIntStack::MyIntStack(){
	top = -1;
}

bool MyIntStack::push( int n ){
	if (this->top == 9){
		return false;
	}
	this->top++;
	this->p[top] = n;
	return true;
}

bool MyIntStack::pop( int &n ){
	if (this->top == -1){
		return false;
	}
	n = this->p[top];
	this->top--;
	return true;
}