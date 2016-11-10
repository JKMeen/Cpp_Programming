#include "Accumulator.h"

Accumulator& Accumulator::add(int v){
	this->value += v;
	return *this;
}

void main(){
	Accumulator acc(20);

	acc.add(30).add(50).add(100);
	cout << "������ �� >>> " << acc.get() << endl;
}