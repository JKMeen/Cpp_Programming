#include "MyIntStack.h"

void main(){
	MyIntStack a;
	int n;
	for (int i = 0; i < 11; i++){ // 11���� Ǫ��
		cout << "���� �� �Է� >>> ";
		cin >> n;
		if (a.push(n)) cout << n << endl; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << "��° stack full" << endl;
	}
	cout << endl;

	for (int i = 0; i<11; i++) { // 11���� ���Ѵ�.
		if(a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i+1 << " ��° stack empty" << endl;  
	}  
	cout << endl;
}