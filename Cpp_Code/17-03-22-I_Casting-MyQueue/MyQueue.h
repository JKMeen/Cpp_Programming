#include <iostream>
using namespace std;

class BaseArray{
protected:
	int capacity;
	int *mem;
public:
	BaseArray(int c = 100){
		this->capacity = c;
		this->mem = new int[c];
	}

	~BaseArray() {
		delete[] this->mem;
	}

	void put(int index, int val){
		this->mem[index] = val;
	}

	int get(int index) {
		return mem[index];
	}

	int getCapacity() {
		return capacity;
	}
};

class MyQueue : public BaseArray{
	int front, rear;
	int size;
public:
	MyQueue(int c = 100) : BaseArray(c){
		front = -1;
		rear = -1;
		this->size = 0;
	}

	// ť�� ����
	void enqueue(int val);

	// ť ����
	int dequeue();

	// ť�� ũ��
	int length();
};