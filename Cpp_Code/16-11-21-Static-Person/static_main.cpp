#include "Static_Person.h"

void main(){
	Static_Person *cho = new Static_Person();
	Static_Person *park = new Static_Person(5000);
	Static_Person *lee = new Static_Person(-10000);

	cout << "Cho >>> " << cho->getMoney() << endl;
	cout << "Park >>> " << park->getMoney() << endl;
	cout << "Lee >>> " << lee->getMoney() << endl;
	cout << "SharedMoney >>> " << Static_Person::getsharedMoney() << endl;
	cout << "Person number >>> " << Static_Person::getPersonNum() << endl << endl;

	cho->addMoney(500); // ���� �� �� -> ���� ��
	cout << "cho add private money < +500 >" << endl << endl;
	park->addShared(100); // ���� �� �� -> ����
	cout << "park add shared money < +100 >" << endl << endl;

	// static ��� �Լ�
	Static_Person::addShared(1000); // ���б�

	cout << "Cho >>> " << cho->getMoney() << endl;
	cout << "Park >>> " << park->getMoney() << endl;
	cout << "Lee >>> " << lee->getMoney() << endl;
	cout << "SharedMoney >>> " << Static_Person::getsharedMoney() << endl;
	cout << "Person number >>> " << Static_Person::getPersonNum() << endl << endl;
}