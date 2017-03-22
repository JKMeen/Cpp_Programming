#include "MyQueue.h"

int main() {
	MyQueue mQ(5); 
	int n;

	for (int i = 0; i<6; i++) {
		cout << "�� �Է� >> ";
		cin >> n; 
		mQ.enqueue(n); // ť�� ���� 
	} 
	cout << endl;
	cout << "ť ���� >> " << mQ.dequeue() << endl;
	cout << "ť ���� >> " << mQ.dequeue() << endl;

	cout << "\nť�� ũ�� >> " << mQ.length() << endl;

	while (mQ.length() != 0){
		cout << "ť ���� >> " << mQ.dequeue() << endl;
	}

	/*
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> "; 
	while(mQ.length() != 0) { 
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ��� 
	} 
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
	*/
	return 0;
}
