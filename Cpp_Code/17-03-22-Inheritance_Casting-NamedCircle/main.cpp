#include "NamedCircle.h"

void main(){
	NamedCircle waffle(3, "waffle");
	waffle.Show();

	NamedCircle c[5];
	int size;
	string name;
	int max = 0;

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++){
		cout << i+1 << " >>> ";
		cin >> size;
		getline(cin, name, '\n');
		//cin >> name;
		c[i].set(size, name);
	}
	
	for (int i = 1; i < 5; i++){
		if (c[max].getRadius() < c[i].getRadius()){
			max = i;
		}
	}

	cout << "가장 면적이 큰 피자는 " << c[max].getName() << " 입니다." << endl;
}