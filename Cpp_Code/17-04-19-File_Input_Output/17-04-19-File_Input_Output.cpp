#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	ofstream fout; // 파일 쓰기를 위한 스트림 생성
	ifstream fin; // 파일 읽기를 위한 스트림 생성

	/* 파일 쓰기 */
	fout.open("class.txt"); // 파일 열기, 없으면 자동으로 생성됨

	if (!fout) // 파일이 없을 경우
		cout << "파일 열기에 실패" << endl;

	string name, dept;
	int id;
	double gpa;

	cout << "이름 학과 입력 >> ";
	cin >> name >> dept;
	cout << "학번 학점 입력 >> ";
	cin >> id >> gpa;

	// 파일에 입력
	fout << name << endl; 
	fout << dept << endl;
	fout << id << endl;
	fout << gpa << endl;

	fout.close(); // 파일 닫기

	string myname, mydept;
	int myid;
	double mygpa;

	/* 파일 읽기 */
	fin.open("class.txt");
	if (!fin)
		cout << "파일 열기에 실패" << endl;

	// 파일 읽기
	fin >> myname;
	fin >> mydept;
	fin >> myid;
	fin >> mygpa;

	fin.close(); // 파일 닫기

	cout << myname << endl;
	cout << mydept << endl;
	cout << myid << endl;
	cout << mygpa << endl;
}