#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	char* file = "system.ini";

	ofstream fout("system.ini", ios::binary);
	ifstream fin("c:\\windows\\system.ini", ios::binary);

	if (!fin)
		cout << file << "열기 오류" << endl;

	if (!fout)
		cout << file << "쓰기 오류" << endl;
	
	int count = 0;
	int c; // char를 써도 된다.

	//while (!fin.eof()){ // 이걸 하게 되면 eof의 값까지 읽어 들인다
	while ((c = fin.get()) != EOF){ // EOF : End Of File, 파일의 끝까지 문자 읽기
		fout.put(c);
		//fout << (char)c; // 이걸 써도 됨
		count++;
	}

	cout << "읽은 바이트 수는" << count << endl;

	fin.close(); // 파일 닫기
	fout.close(); // 파일 닫기

	count = 0;

	ifstream fin2("system.ini", ios::binary);

	while ((c = fin2.get()) != EOF){ // EOF : End Of File, 파일의 끝까지 문자 읽기
		cout << (char)c;
		count++;
	}

	cout << "읽은 바이트 수는" << count << endl;

	fin2.close();
}