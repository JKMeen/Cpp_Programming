#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	Circle(double r = 3) { this->radius = r; };
	double getArea() {
		return this->radius*this->radius*3.14;
	}
	int getRadius(){
		return this->radius;
	}
};
