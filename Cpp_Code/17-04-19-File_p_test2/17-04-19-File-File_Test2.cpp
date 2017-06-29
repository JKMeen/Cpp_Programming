#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void main(){
	char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin)
		cout << file << "열기 오류" << endl;

	int count = 0;
	int n = 0;
	int c; // char를 써도 된다.

	//while (!fin.eof()){ // 이걸 하게 되면 eof의 값까지 읽어 들인다
	cout << n << " : ";
	while ((c = fin.get()) != EOF){ // EOF : End Of File, 파일의 끝까지 문자 읽기
		cout << (char)c;
		if ((char)c == '\n'){
			n++;
			cout << n << " : ";
		}
		count++;
	}
	cout << "읽은 바이트 수는" << count << endl;

	fin.close(); // 파일 닫기
}