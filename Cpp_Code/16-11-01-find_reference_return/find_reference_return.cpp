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
	cout << "���ڿ� �Է� >>> ";
	cin.getline(s, N, '\n');
	cout << "ã�����ϴ� ���� �Է� >>> ";
	cin >> ch;
	char& loc = find(s, ch, b);
	if(b == false){
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	cout << "�����ϰ��� �ϴ� ���� �Է� >>> ";
	cin >> newch;
	loc = newch;
	cout << s << endl;
}