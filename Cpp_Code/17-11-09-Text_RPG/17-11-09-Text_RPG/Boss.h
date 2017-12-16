#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Boss{
public:
	string name;
	int HP;
	int Atpower;
	int Depower;
	int Mdepower;
	Boss* Before;
	Boss* Next;

	Boss(string _name = "Monster");
	~Boss();

	void Hit(int Attack, int Damage);
	int Attack();
};