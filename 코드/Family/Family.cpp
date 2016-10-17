#include "Family.h"

Family::Family(){
	string name;
	int size;

	cout << "가족 이름 >>> ";
	cin >> name;
	this->name = name;
	cout << "가족 수 입력 >>>";
	cin >> size;
	this->size = size;
	p = new Person[size];
} // size 개수 만큼 Person 배열 동적 생성

void Family::setName(){
	string name;
	for (int i=0; i<this->size; i++){
		cout << i+1 << "번째 구성원 이름 >>>";
		cin >> name;
		p[i].setName(name);
	}
} // 순서/이름

void Family::show(){
	cout << "Family Name >>> " << this->name << endl;
	for (int i=0; i<this->size; i++){
		cout << p[i].getName()<<endl;
	}
} // 모든 가족 구성원 출력

Family::~Family(){
	delete [] p;
}