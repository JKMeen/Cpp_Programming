#include <iostream>
#include <string>

using namespace std;

class Point {
protected:
	int x, y;
public:
	Point(int x=0, int y=0) { 
		this->x = x; this->y = y; 
	} 

	int getX() { 
		return this->x; 
	} 

	int getY() { 
		return this->y; 
	}

	void setPoint(int x, int y){
		this->x = x;
		this->y = y;
	}

protected:
	void move(int x, int y) { 
		this->x = x; this->y = y; 
	}
};

class ColorPoint : public Point{
	string color;
public:
	ColorPoint(int x=0, int y=0, string color="Black") : Point(x, y){
		this->color = color;
	}

	void setColor(string color){
		this->color = color;
	}

	string getColor(){
		return this->color;
	}

	void show(){
		cout << getColor() << "������" << "(" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};