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
	Person(const Person& p); // 복사 생성자

	void changeName(char* newname);

	void changeName( Person p ); // 오버로딩

	void show( string s ) { cout << s << "이름 >>> " << name << endl << endl; };
	~Person();
};

#endif