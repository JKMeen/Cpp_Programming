#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	ofstream fout; // ���� ���⸦ ���� ��Ʈ�� ����
	ifstream fin; // ���� �б⸦ ���� ��Ʈ�� ����

	/* ���� ���� */
	fout.open("class.txt"); // ���� ����, ������ �ڵ����� ������

	if (!fout) // ������ ���� ���
		cout << "���� ���⿡ ����" << endl;

	string name, dept;
	int id;
	double gpa;

	cout << "�̸� �а� �Է� >> ";
	cin >> name >> dept;
	cout << "�й� ���� �Է� >> ";
	cin >> id >> gpa;

	// ���Ͽ� �Է�
	fout << name << endl; 
	fout << dept << endl;
	fout << id << endl;
	fout << gpa << endl;

	fout.close(); // ���� �ݱ�

	string myname, mydept;
	int myid;
	double mygpa;

	/* ���� �б� */
	fin.open("class.txt");
	if (!fin)
		cout << "���� ���⿡ ����" << endl;

	// ���� �б�
	fin >> myname;
	fin >> mydept;
	fin >> myid;
	fin >> mygpa;

	fin.close(); // ���� �ݱ�

	cout << myname << endl;
	cout << mydept << endl;
	cout << myid << endl;
	cout << mygpa << endl;
}