#include "Circle.h"

void main(){
	vector<Circle> data;
	int radius;
	string name;

	// vector�� Circle��ü(������, �̸�) �Է�
	while(true){
		cout << "������ �Է� >>> ";
		cin >> radius;
		if (radius == -1) break;
		getchar();
		cout << "�̸� �Է� >>> ";
		getline(cin, name, '\n');
		cout << endl;
		data.push_back(Circle(radius, name));
	}

	// ��ü ����
	stable_sort( data.begin(), data.end() );
	vector<Circle>::iterator it; // it�� ������

	for (it = data.begin(); it < data.end(); it++){
		cout << it->getName() << ":" << it->getArea() << endl;
	}
}