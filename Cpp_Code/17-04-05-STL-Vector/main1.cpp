#include <iostream>
#include <vector>
#include <string>
using namespace std;

void main() {
	vector<string> name;
	string input;

	cout << "5�� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		getline(cin, input);
		name.push_back(input);
	}
	cout << "���� ũ�� >>> " << name.size() << endl;
	cout << "���� �뷮 >>> " << name.capacity() << endl;

	cout << "����° ������ >>> " << name.at(2) << endl;
	cout << "�׹�° ������ >>> " << name[3] << endl;

	name.at(2) = "������"; // �ٲ� ������
	name[3] = "������"; // �ٲ� ������

	cout << "����° ������ >>> " << name.at(2) << endl;
	cout << "�׹�° ������ >>> " << name[3] << endl;
}