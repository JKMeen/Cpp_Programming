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
	int n = 0;
	int c; // char�� �ᵵ �ȴ�.

	//while (!fin.eof()){ // �̰� �ϰ� �Ǹ� eof�� ������ �о� ���δ�
	cout << n << " : ";
	while ((c = fin.get()) != EOF){ // EOF : End Of File, ������ ������ ���� �б�
		cout << (char)c;
		if ((char)c == '\n'){
			n++;
			cout << n << " : ";
		}
		count++;
	}
	cout << "���� ����Ʈ ����" << count << endl;

	fin.close(); // ���� �ݱ�
}