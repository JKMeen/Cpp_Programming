#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void main(){
	vector<string> data;
	string value;

	// vector에 정수 입력
	while(true){
		cout << "문자열 입력 (exit이면 stop) >>> ";
		getline(cin, value);
		if (value == "exit") break;
		data.push_back(value);
	}

	// #include <algorithm>의 함수
	sort(data.begin(), data.end());

	vector<string>::iterator it; // it는 포인터

	for (it = data.begin(); it < data.end();it++)
		cout << *it << " ";
}