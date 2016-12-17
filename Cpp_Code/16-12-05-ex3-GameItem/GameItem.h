#include <iostream>
#include <string>
using namespace std;

class GameItem{
	string weapon;
	int power;
	double duration;
public:
	GameItem(string w="gun", int pow=0, double dur=0) {
		this->weapon = w;
		this->power = pow;
		this->duration = dur;
	}
	// const�� ���̴� ���� Ȯ���ϰ� �ϱ� ����
	GameItem operator+(GameItem& p);
	GameItem operator+(int v);
	GameItem operator-(GameItem& p);
	GameItem operator-(int v);
	GameItem operator*(GameItem& p);
	
	GameItem operator++(); //���� ������ ++
	GameItem operator--(); //���� ������ --

	GameItem operator++ (int x); //���� ������ ++
	GameItem operator-- (int x); //���� ������ --
	

	bool operator==(const GameItem& p);
	bool operator!=(const GameItem& p);
	bool operator<(const GameItem& p);
	bool operator>(const GameItem& p);
	
	friend GameItem operator+(int val, GameItem& p);
	friend GameItem operator-(int val, GameItem& p);
	friend ostream& operator<<(ostream& os, GameItem& p);
	friend istream& operator>>(istream& is, GameItem& p);
};