#include "Circle.h"

void main(){
	vector<Circle> data;
	int radius;
	string name;

	// vector에 Circle객체(반지름, 이름) 입력
	while(true){
		cout << "반지름 입력 >>> ";
		cin >> radius;
		if (radius == -1) break;
		getchar();
		cout << "이름 입력 >>> ";
		getline(cin, name, '\n');
		cout << endl;
		data.push_back(Circle(radius, name));
	}

	// 객체 정렬
	stable_sort( data.begin(), data.end() );
	vector<Circle>::iterator it; // it는 포인터

	for (it = data.begin(); it < data.end(); it++){
		cout << it->getName() << ":" << it->getArea() << endl;
	}
}