#ifndef STATIC_PERSON_H
#define STATIC_PERSON_H

#include <iostream>
using namespace std;

class Static_Person{
	int money;
	static int sharedMoney;
	static int PersonNumber;

public:
	Static_Person(int m = 0){ money = m; sharedMoney += m; PersonNumber++; } // 생성자(디폴트매개변수)
	void addMoney(int m);
	static void addShared(int m);
	int getMoney(){ return money; }
	static int getsharedMoney(){ return sharedMoney; }
	static int getPersonNum(){ return PersonNumber; }
};

#endif