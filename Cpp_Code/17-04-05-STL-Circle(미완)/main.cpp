#include "Circle.h"
#include <vector>

void main() {
	//vector<Circle> Cd;
	vector<Circle*> Cd;
	Circle *tmp;
	int inputR;
	string inputS;
	int set = 0;

	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;

	while (set != 4){
		cout << "����:1, ����:2, ��κ���:3, ����:4 >>> ";
		cin >> set;

		switch (set) {
		case 1: cout << "�����ϰ����ϴ� ���� �������� �̸� >>> ";
				cin >> inputR >> inputS;
				//Cd.push_back(Circle(inputR, inputS));
				tmp = new Circle(inputR, inputS);
				Cd.push_back(tmp);
				break;

		case 2: cout << "�����ϰ��� �ϴ� ���� �̸� >>> ";
				cin >> inputS;
				for (int i=0; i<Cd.size(); i++){
					if (Cd.at(i) == tmp->getName)
						Cd.pop_back();
				}
				break;

		case 3: for (int i = 0; i < Cd.size(); i++) {
					cout << Cd.at(i)->getName << endl;
				} cout << endl;
				break;

		case 4: break; break;
		}
	}
}