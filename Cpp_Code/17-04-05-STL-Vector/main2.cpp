#include <iostream>
#include <vector>
#include <string>
using namespace std;

void main() {
	vector<string> name;
	string input;

	cout << "5개 입력" << endl;
	for (int i = 0; i < 5; i++) {
		getline(cin, input);
		name.push_back(input);
	}
	string max = name[0];

	for (int i = 0; i < name.size(); i++) {
		if (max < name[i])
			max = name[i];
	}

	cout << "사전적으로 맨 나중에 나오는 이름 >>> " << max << endl;
}