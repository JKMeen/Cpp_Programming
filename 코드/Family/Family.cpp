#include "Family.h"

Family::Family(){
	string name;
	int size;

	cout << "���� �̸� >>> ";
	cin >> name;
	this->name = name;
	cout << "���� �� �Է� >>>";
	cin >> size;
	this->size = size;
	p = new Person[size];
} // size ���� ��ŭ Person �迭 ���� ����

void Family::setName(){
	string name;
	for (int i=0; i<this->size; i++){
		cout << i+1 << "��° ������ �̸� >>>";
		cin >> name;
		p[i].setName(name);
	}
} // ����/�̸�

void Family::show(){
	cout << "Family Name >>> " << this->name << endl;
	for (int i=0; i<this->size; i++){
		cout << p[i].getName()<<endl;
	}
} // ��� ���� ������ ���

Family::~Family(){
	delete [] p;
}