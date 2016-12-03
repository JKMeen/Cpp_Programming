#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H
#include <iostream>
using namespace std;

class Circle{
	double radius;

public:
	Circle(){};
	Circle(double r){ cout << "������ ����\n"; radius = r; };
	
	// ���� ������ const
	Circle(const Circle &c){ 
		cout << "��������� ����\n";
		radius = c.radius;
	};

	double getRadius() { return radius; };
	void setRadius(double r){ radius = r; }
	~Circle(){ cout << "�Ҹ��� ����\n"; };
};

#endif