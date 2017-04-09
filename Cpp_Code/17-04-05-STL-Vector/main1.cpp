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
	cout << "벡터 크기 >>> " << name.size() << endl;
	cout << "벡터 용량 >>> " << name.capacity() << endl;

	cout << "세번째 데이터 >>> " << name.at(2) << endl;
	cout << "네번째 데이터 >>> " << name[3] << endl;

	name.at(2) = "ㅂㄱㄴ"; // 바꾼 데이터
	name[3] = "ㅊㅅㅅ"; // 바꾼 데이터

	cout << "세번째 데이터 >>> " << name.at(2) << endl;
	cout << "네번째 데이터 >>> " << name[3] << endl;
}