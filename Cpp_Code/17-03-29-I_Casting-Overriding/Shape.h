#include <iostream>
using namespace std;

class Shape{
public:
	void paint(){
		draw();
	}

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
		//cout << "[�������� ������(::)]" << endl;
		//Shape::draw();
		cout << "Circle Draw" << endl;
	}
};

class Line : public Shape{
public:
	void paint(){
		draw();
	}
	virtual void draw(){
		//cout << "[�������� ������(::)]" << endl;
		//Shape::draw();
		cout << "Line Draw" << endl;
	}
};

class Rectangle : public Shape{
public:
	virtual void paint(){
		draw();
	}
	virtual void draw(){
		//cout << "[�������� ������(::)]" << endl;
		//Shape::draw();
		cout << "Rectangle Draw" << endl;
	}
};