#include <iostream> 
#include <fstream> 
using namespace std;
int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) { cout << "c:\\windows\\system.ini ���� ����" << endl; return 0; }
	char buf[81]; // �� ������ �ִ� 80���� ���ڷ� �����ȴٰ� ���� 
	while (true) {
		fin.getline(buf, 81); // �� ������ �ִ� 80���ǹ��ڷ� ���� 
		if (fin.eof()) break; // �б� ���� 
		cout << buf << endl; // ���� ��� 
	}
	fin.close();
}