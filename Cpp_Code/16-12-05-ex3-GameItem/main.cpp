#include "GameItem.h"

// friend
GameItem operator-(int val, GameItem& p){
	GameItem tmp(p.weapon);
	tmp.power = val - p.power;
	tmp.duration = val - p.duration;
	return tmp;
}

GameItem operator+(int val, GameItem& p){
	GameItem tmp(p.weapon);
	tmp.power = val + p.power;
	tmp.duration = val + p.duration;
	return tmp;
}

ostream& operator<<(ostream& os, GameItem& p){
	os << "[ " << p.weapon << ", " << p.power << ", " << p.duration << " ]" << endl;
	return os;
}

istream& operator>>(istream& is, GameItem& p){
	cout << endl;
	cout << "input power >> ";
	is >> p.power;
	cout << "input duration >> ";
	is >> p.duration;
	cout << "[ " << p.power << ", " << p.duration << " ]" << endl << endl;
	return is;
}

void main()
{
	GameItem item1("sword", 5,0.5), item2("magic"), item3("shield", 2, 10.1);
	cout<< "// �����Ȱ��Ӿ��������� //\n";
	cout << "item1 >>> " << item1 << "item2 >>> " << item2 << "item3 >>> " << item3 ;

	item2 = 10+item2;
	cout<< "\n// ����Ȱ��Ӿ����� // \n" << "item2 >>> " << item2;

	GameItem myitem= item2 * item1;
	GameItem youritem= item3 + item1;

	if( myitem > youritem) cout<< "\n// ���� �� ���� //\n" << "myItem >>> "<< myitem << "yourItem >>> "<< youritem;
	else cout<< "\n// �ϰ� �� ���� //\n" << "myItem >>> "<< myitem << "yourItem >>> "<< youritem;

	myitem--;
	cout << "\nmyItem >>>" << myitem;
	--myitem;
	cout << "myItem >>>" << myitem;
}