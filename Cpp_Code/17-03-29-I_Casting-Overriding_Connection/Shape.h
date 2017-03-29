#include <iostream>
using namespace std;

class Shape{
private:
	Shape* next;

public:
	Shape() { next = NULL; }

	void paint(){
		draw();
	}

	Shape* add(Shape * p){
		this->next = p; // 새로 생성한 주소를 넣는다.
		return p;  // 마지막으로 받은 주소가 p이므로 p를 리턴
	}

	Shape* getNext() {
		cout << "[다음 주소 불러오기]" << endl;
		return this->next;
	}

	~Shape(){}

protected:
	virtual void draw(){
		cout << "Shape Draw" << endl;
	}
};

class Circle : public Shape{
public:
	void paint(){
		draw(); // 범위지정 연산자
	}
	virtual void draw(){
		cout << "Circle Draw" << endl;
	}
};

class Line : public Shape{
public:
	void paint(){
		draw();
	}
	virtual void draw(){
		cout << "Line Draw" << endl;
	}
};

class Rectangle : public Shape{
public:
	virtual void paint(){
		draw();
	}
	virtual void draw(){
		cout << "Rectangle Draw" << endl;
	}
};