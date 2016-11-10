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
	Person* p; // Person 배열 포인트
	int size; // Person 배열의 크기, 가족 구성원 수
public:
	Family(); // size 개수 만큼 Person 배열 동적 생성
	void setName(); // 순서/이름
	void show(); // 모든 가족 구성원 출력
	~Family();
};

#endif