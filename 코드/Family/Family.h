#ifndef FAMILY_H
#define FAMILY_H
#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
public:
	Person(){name="";}
	Person(string name){this->name=name;}
	string getName(){ return name; }
	void setName(string name){ this->name = name; }
};

class Family{
	string name;
	Person* p; // Person �迭 ����Ʈ
	int size; // Person �迭�� ũ��, ���� ������ ��
public:
	Family(); // size ���� ��ŭ Person �迭 ���� ����
	void setName(); // ����/�̸�
	void show(); // ��� ���� ������ ���
	~Family();
};

#endif