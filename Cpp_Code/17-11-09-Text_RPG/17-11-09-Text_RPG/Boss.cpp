#include "Boss.h"

Boss::Boss(string _name){
	name = _name;

	if (_name == "Boss"){
		HP = 40 + rand() % 10;
		Atpower = 1 + rand() % 5;
		Depower = 1 + rand() % 5;
		Mdepower = 1 + rand() % 5;
	}
	else{
		HP = 20 + rand() % 10;
		Atpower = 1 + rand() % 2;
		Depower = 1 + rand() % 4;
		Mdepower = 1 + rand() % 4;
	}
}

Boss::~Boss(){
	if (name == "Boss")
		cout << "<System> " << name << "는 죽었습니다. 인류는 살았습니다." << endl;
	else
		cout << "<System> " << name << "가 죽었습니다." << endl;
}

void Boss::Hit(int Attack, int Damage){	// 공격종류(0:일반, 1: 마법) / 공격데미지
	int damage;
	if (Attack == 1)
		damage = Damage - this->Depower;
	else 
		damage = Damage - this->Mdepower;
	
	this->HP -= damage;

	if (damage == 0)
		cout << "<System> " << "용사 -> " << this->name << " Miss!" << endl;
	else if (Attack == 1)
		cout << "<System> " << "용사 -> " << this->name << " " << damage << "의 물리 피해를 입혔다!" << endl;
	else
		cout << "<System> " << "용사 -> " << this->name << " " << damage << "의 마법 피해를 입혔다!" << endl;
}

int Boss::Attack(){
	Atpower = 1 + rand() % 5;
	cout << "<System> " << this->name << " -> 용사 공격! >> " << Atpower << "데미지" << endl;
	return Atpower;
}