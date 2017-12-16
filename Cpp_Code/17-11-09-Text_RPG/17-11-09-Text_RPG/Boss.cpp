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
		cout << "<System> " << name << "�� �׾����ϴ�. �η��� ��ҽ��ϴ�." << endl;
	else
		cout << "<System> " << name << "�� �׾����ϴ�." << endl;
}

void Boss::Hit(int Attack, int Damage){	// ��������(0:�Ϲ�, 1: ����) / ���ݵ�����
	int damage;
	if (Attack == 1)
		damage = Damage - this->Depower;
	else 
		damage = Damage - this->Mdepower;
	
	this->HP -= damage;

	if (damage == 0)
		cout << "<System> " << "��� -> " << this->name << " Miss!" << endl;
	else if (Attack == 1)
		cout << "<System> " << "��� -> " << this->name << " " << damage << "�� ���� ���ظ� ������!" << endl;
	else
		cout << "<System> " << "��� -> " << this->name << " " << damage << "�� ���� ���ظ� ������!" << endl;
}

int Boss::Attack(){
	Atpower = 1 + rand() % 5;
	cout << "<System> " << this->name << " -> ��� ����! >> " << Atpower << "������" << endl;
	return Atpower;
}