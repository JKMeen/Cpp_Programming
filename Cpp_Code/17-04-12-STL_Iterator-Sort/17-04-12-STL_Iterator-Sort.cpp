#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void main(){
	vector<string> data;
	string value;

	// vector�� ���� �Է�
	while(true){
		cout << "���ڿ� �Է� (exit�̸� stop) >>> ";
		getline(cin, value);
		if (value == "exit") break;
		data.push_back(value);
	}

	// #include <algorithm>�� �Լ�
	sort(data.begin(), data.end());

	vector<string>::iterator it; // it�� ������

	for (it = data.begin(); it < data.end();it++)
		cout << *it << " ";
}