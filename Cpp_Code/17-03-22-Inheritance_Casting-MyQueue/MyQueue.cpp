#include "MyQueue.h"

// ť�� ����
void MyQueue::enqueue(int val){
	rear++;
	if (rear == this->capacity){
		cout << "ť�� ��ȭ����, " << val << "�߰� ����\n";
		return;
	}

	put(rear, val);
	this->size++;
}

// ť ����
int MyQueue::dequeue() { // ť���� �����Ͽ� ��� 
	if (rear == -1){
		cout << "ť�� �������\n";
		return -1;
	}

	front++;
	this->size--;
	cout << "<size ����>" << endl;
	get(front);
}

// ť�� ũ��
int MyQueue::length(){
	return this->size;
}