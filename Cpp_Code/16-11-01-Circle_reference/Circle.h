#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle{
	double radius;

public:
	Circle(){ cout << "<������ ����>" << endl<< endl; radius = 1; };
	Circle( double r ){ cout << "<������ ����>" << endl<< endl; radius = r;};
	void setRadius( double r ) {radius = r;};
	double getRadius(){ return radius; };
	~Circle(){cout << "<�Ҹ��� ����>"<< endl << "radius >>>" << radius << endl<< endl;};
};

#endif