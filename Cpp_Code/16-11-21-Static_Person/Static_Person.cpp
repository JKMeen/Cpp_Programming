#include "Static_Person.h"

int Static_Person::sharedMoney = 0; // 반드시 초기화
int Static_Person::PersonNumber = 0;

void Static_Person::addMoney(int m){
	this->money += m;
}

void Static_Person::addShared(int m){
	sharedMoney += m;
}