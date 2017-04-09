#include <iostream>
#include <string>
using namespace std;

/* ���׸� Ŭ���� ���� */
template <class T>
class MyStack {
	int top;
	T data[100]; // TŸ���� �迭
public:
	MyStack() { top = -1; };
	void push(T element);
	T pop();
};

/* ���׸� Ŭ���� ���� */
template <class T>
void MyStack<T>::push(T value) {
	data[++top] = value;
}

template <class T>
T MyStack<T>::pop(){
	return data[top--];
	/*T tmp = data[top];
	top --;
	return tmp;*/
}