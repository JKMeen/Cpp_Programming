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
	string max = name[0];

	for (int i = 0; i < name.size(); i++) {
		if (max < name[i])
			max = name[i];
	}

	cout << "���������� �� ���߿� ������ �̸� >>> " << max << endl;
}