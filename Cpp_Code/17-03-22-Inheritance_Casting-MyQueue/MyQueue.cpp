#include "MyQueue.h"

// 큐에 삽입
void MyQueue::enqueue(int val){
	rear++;
	if (rear == this->capacity){
		cout << "큐가 포화상태, " << val << "추가 못함\n";
		return;
	}

	put(rear, val);
	this->size++;
}

// 큐 삭제
int MyQueue::dequeue() { // 큐에서 제거하여 출력 
	if (rear == -1){
		cout << "큐가 공백상태\n";
		return -1;
	}

	front++;
	this->size--;
	cout << "<size 감소>" << endl;
	get(front);
}

// 큐의 크기
int MyQueue::length(){
	return this->size;
}