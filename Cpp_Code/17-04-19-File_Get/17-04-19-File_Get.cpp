#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin)
		cout << file << "���� ����" << endl;

	int count = 0;
	int c; // char�� �ᵵ �ȴ�.

	while ((c = fin.get()) != EOF){ // EOF : End Of File, ������ ������ ���� �б�
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ����" << count << endl;

	fin.close(); // ���� �ݱ�
}