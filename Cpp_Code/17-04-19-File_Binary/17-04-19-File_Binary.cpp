#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	char* file = "system.ini";

	ofstream fout("system.ini", ios::binary);
	ifstream fin("c:\\windows\\system.ini", ios::binary);

	if (!fin)
		cout << file << "���� ����" << endl;

	if (!fout)
		cout << file << "���� ����" << endl;
	
	int count = 0;
	int c; // char�� �ᵵ �ȴ�.

	//while (!fin.eof()){ // �̰� �ϰ� �Ǹ� eof�� ������ �о� ���δ�
	while ((c = fin.get()) != EOF){ // EOF : End Of File, ������ ������ ���� �б�
		fout.put(c);
		//fout << (char)c; // �̰� �ᵵ ��
		count++;
	}

	cout << "���� ����Ʈ ����" << count << endl;

	fin.close(); // ���� �ݱ�
	fout.close(); // ���� �ݱ�

	count = 0;

	ifstream fin2("system.ini", ios::binary);

	while ((c = fin2.get()) != EOF){ // EOF : End Of File, ������ ������ ���� �б�
		cout << (char)c;
		count++;
	}

	cout << "���� ����Ʈ ����" << count << endl;

	fin2.close();
}