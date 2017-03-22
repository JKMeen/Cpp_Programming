#include <iostream>
#include <string>

using namespace std;

class Circle{
protected:
	int radius;
public:
	Circle(int radius = 0){
		this->radius = radius;
	}

	void setRadius(int radius){
		this->radius = radius;
	}

	int getRadius(){
		return this->radius;
	}

	double getArea(){
		return 3.14*radius*radius;
	}
};

class NamedCircle : public Circle{
	string name;
public:
	NamedCircle(int radius=0, string name ="default pizza") : Circle(radius){
		this->name = name;
	}

	void set(int size, string n){
		this->radius = size;
		this->name = n;
	}

	string getName(){
		return this->name;
	}

	

	void Show(){
		cout << "반지름이 " << this->radius << "인 " << this->name << endl;
	}
};