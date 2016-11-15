#include "MyVector.h"

MyVector::MyVector(int n, int num){
	this->p = new int[n];
	for (int i=0; i<n; i++){
		this->p[i] = num;
	}
	this->size = n;
}

MyVector::~MyVector(){
	delete[] this->p;
}

void MyVector::show(){
	for(int i=0; i<this->size; i++)
		cout << this->p[i] << " ";
	cout << endl;
}

void main(){
	MyVector v1;
	MyVector *v2 = new MyVector(5, 100);
	v1.show();
	v2->show();

	//MyVector v1, v2(1024);
	
	/* // 悼利 积己矫 new客 delete/
	MyVector *v1 = new MyVector();
	MyVector *v2 = new MyVector(1024);
	delete v1;
	delete v2;*/
}