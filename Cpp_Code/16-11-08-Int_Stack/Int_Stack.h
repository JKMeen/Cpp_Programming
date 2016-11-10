#ifndef MYINTSTACK
#define MYINTSTACK

#include <iostream>
using namespace std;

class MyIntStack{
	int top;
	int p[10];
public:
	MyIntStack();
	bool push( int n );
	bool pop( int &n );
};

#endif