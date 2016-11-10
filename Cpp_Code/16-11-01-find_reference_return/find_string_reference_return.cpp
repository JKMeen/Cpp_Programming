#include <iostream>
#include <string>
using namespace std;

#define N 100

char& find(string& str, char ch, bool& sucess){
	int n = str.size();
	for (int i=0; i< n; i++){
		if (str[i] == ch){
			sucess = true;
			return str[i];
		}
	}
}

int main(){
	string s;
	bool b = false;
	char ch, newch;
	cout << "문자열 입력 >>> ";
	cin.getline(s, N, '\n');
	cout << "찾고자하는 문자 입력 >>> ";
	cin >> ch;
	char& loc = find(s, ch, b);
	if(b == false){
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	cout << "변경하고자 하는 문자 입력 >>> ";
	cin >> newch;
	loc = newch;
	cout << s << endl;
}