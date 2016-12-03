#include "Matrix.h"

Matrix Matrix::operator+(const Matrix& m){
	Matrix tmp;
	tmp.m1 = this->m1 + m.m1;
	tmp.m2 = this->m2 + m.m2;
	tmp.m3 = this->m3 + m.m3;
	tmp.m4 = this->m4 + m.m4;

	return tmp;
}

Matrix Matrix::operator+=(const Matrix& m){
	this->m1 += m.m1;
	this->m2 += m.m2;
	this->m3 += m.m3;
	this->m4 += m.m4;

	return *this;
}

bool Matrix::operator==(const Matrix& m){
	if (this->m1 == m1 && this->m2 == m2 && this->m3 == m3 && this->m4 == m4){
		return true;
	}
	return false;
}

void main() {
	Matrix a(1,2,3,4), b(2,3,4,5), c;

	c = a + b;
	a += b;

	a.show(); b.show(); c.show();

	if(a == c)
		cout << "a and c are the same" << endl;
}