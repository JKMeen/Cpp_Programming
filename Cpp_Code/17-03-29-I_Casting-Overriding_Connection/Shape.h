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
		this->next = p; // ���� ������ �ּҸ� �ִ´�.
		return p;  // ���������� ���� �ּҰ� p�̹Ƿ� p�� ����
	}

	Shape* getNext() {
		cout << "[���� �ּ� �ҷ�����]" << endl;
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
		draw(); // �������� ������
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