#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{
	int id;
	char* name;
public:
	Person(int id, char* name);
	Person(const Person& p); // ���� ������

	void changeName(char* newname);

	void changeName( Person p ); // �����ε�

	void show( string s ) { cout << s << "�̸� >>> " << name << endl << endl; };
	~Person();
};

#endif