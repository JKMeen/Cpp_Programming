#include "MyIntStack.h"

void main(){
	MyIntStack a;
	int n;
	for (int i = 0; i < 11; i++){ // 11개를 푸쉬
		cout << "정수 값 입력 >>> ";
		cin >> n;
		if (a.push(n)) cout << n << endl; // 푸시된 값 에코
		else cout << endl << i + 1 << "번째 stack full" << endl;
	}
	cout << endl;

	for (int i = 0; i<11; i++) { // 11개를 팝한다.
		if(a.pop(n)) cout << n << ' '; // 팝 한 값 출력
		else cout << endl << i+1 << " 번째 stack empty" << endl;  
	}  
	cout << endl;
}