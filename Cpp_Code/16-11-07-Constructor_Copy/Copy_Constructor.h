#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H
#include <iostream>
using namespace std;

class Circle{
	double radius;

public:
	Circle(){};
	Circle(double r){ cout << "생성자 수행\n"; radius = r; };
	
	// 복사 생성자 const
	Circle(const Circle &c){ 
		cout << "복사생성자 수행\n";
		radius = c.radius;
	};

	double getRadius() { return radius; };
	void setRadius(double r){ radius = r; }
	~Circle(){ cout << "소멸자 수행\n"; };
};

#endif