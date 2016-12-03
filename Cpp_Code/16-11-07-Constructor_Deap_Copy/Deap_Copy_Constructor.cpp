#include "Person.h"

// 생성자
Person::Person(int id, char* name){
	this->id = id;
	
	// 잘못된 예 : this->name = name;
	// 옳바른 예
	int length = strlen( name );
	this->name = new char[length + 1]; // 마지막 \0 때문에 +1
	strcpy(this->name, name);
}

Person::~Person(){
	cout << "소멸자 실행\n";
	delete[] this->name;
}

// 복사 생성자
Person::Person(const Person& p){
	cout << "복사 생성자 수행\n";
	this->id = p.id;
	this->name = new char[strlen(p.name) + 1];
	strcpy(this->name, p.name);
}

void Person::changeName(char* newname){
	if (strlen(this->name) < strlen(newname)){
		delete[] this->name;
		this->name = new char[strlen(newname) + 1];
		strcpy(this->name, newname);
	}
	else {
		strcpy(this->name, newname);
	}
}

// 오버로딩
void Person::changeName( Person p ){
	if (strlen(this->name) < strlen(p.name)){
		delete[] this->name;
		this->name = new char[strlen(p.name) + 1];
		strcpy(this->name, p.name);
	}
	else {
		strcpy(this->name, p.name);
	}
}