#include <iostream>
#include <string>

using namespace std;

#ifndef POINT_H
#define POINT_H

class Point{
protected:
	int x, y;

public:
	void setPoint(int x, int y){
		this->x = x;
		this->y = y;
	}
	void showPoint(){
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
	
	friend ostream& operator<<(ostream& os, const Point &p);
	friend istream& operator>>(istream& is, Point &p);
};

#endif