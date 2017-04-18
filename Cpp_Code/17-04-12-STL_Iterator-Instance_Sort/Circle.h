#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Circle{
	int radius;
	string name;
public:
	Circle(int radius = 3, string name="circle") {
		this->radius = radius;
		this->name = name;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; }

	bool operator <(const Circle &a) const{
		return this-> radius < a.radius;
	}
};