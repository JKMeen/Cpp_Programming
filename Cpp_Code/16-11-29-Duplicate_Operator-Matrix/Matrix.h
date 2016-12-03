#include <iostream>
using namespace std;

class Matrix{
	int m1, m2, m3, m4;
public:
	Matrix(int m1=0, int m2=0, int m3=0, int m4=0){
		this->m1 = m1; 
		this->m2 = m2;
		this->m3 = m3;
		this->m4 = m4;
	}
	Matrix operator+(const Matrix& m);
	Matrix operator+=(const Matrix& m);
	bool operator==(const Matrix& m);
	void show(){
		cout << "[ " << m1 << ", " << m2 << ", " << m3 << ", " << m4 << " ]" << endl;
	}
};