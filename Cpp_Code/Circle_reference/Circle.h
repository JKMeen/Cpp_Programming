#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

class Circle{
	double radius;

public:
	Circle(){ cout << "<积己磊 荐青>" << endl<< endl; radius = 1; };
	Circle( double r ){ cout << "<积己磊 荐青>" << endl<< endl; radius = r;};
	void setRadius( double r ) {radius = r;};
	double getRadius(){ return radius; };
	~Circle(){cout << "<家戈磊 荐青>"<< endl << "radius >>>" << radius << endl<< endl;};
};

#endif