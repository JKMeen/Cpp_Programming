#include "MyQueue.h"

int main() {
	MyQueue mQ(5); 
	int n;

	for (int i = 0; i<6; i++) {
		cout << "값 입력 >> ";
		cin >> n; 
		mQ.enqueue(n); // 큐에 삽입 
	} 
	cout << endl;
	cout << "큐 삭제 >> " << mQ.dequeue() << endl;
	cout << "큐 삭제 >> " << mQ.dequeue() << endl;

	cout << "\n큐의 크기 >> " << mQ.length() << endl;

	while (mQ.length() != 0){
		cout << "큐 삭제 >> " << mQ.dequeue() << endl;
	}

	/*
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> "; 
	while(mQ.length() != 0) { 
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력 
	} 
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
	*/
	return 0;
}
