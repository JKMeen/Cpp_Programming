#include <iostream>
#include <string>
using namespace std;

/* 제네릭 클래스 선언 */
template <class T>
class MyStack {
	int top;
	T data[100]; // T타입의 배열
public:
	MyStack() { top = -1; };
	void push(T element);
	T pop();
};

/* 제네릭 클래스 구현 */
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