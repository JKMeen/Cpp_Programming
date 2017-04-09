#include "Circle.h"
#include <vector>

void main() {
	//vector<Circle> Cd;
	vector<Circle*> Cd;
	Circle *tmp;
	int inputR;
	string inputS;
	int set = 0;

	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;

	while (set != 4){
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>> ";
		cin >> set;

		switch (set) {
		case 1: cout << "생성하고자하는 원의 반지름와 이름 >>> ";
				cin >> inputR >> inputS;
				//Cd.push_back(Circle(inputR, inputS));
				tmp = new Circle(inputR, inputS);
				Cd.push_back(tmp);
				break;

		case 2: cout << "삭제하고자 하는 원의 이름 >>> ";
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