#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point(int x=0, int y=0) { this->x = x; this->y = y; }
	// const를 붙이는 것은 확실하게 하기 위함
	Point operator+(const Point& p);
	Point operator+(const int v);
	Point operator-(const Point& p);
	Point operator-(const int v);
	
	Point operator++(); //전위 연산자 ++
	Point operator--(); //전위 연산자 --

	Point operator++ (int x); //후위 연산자 ++
	Point operator-- (int x); //후위 연산자 --bool operator<(const Point& p);

	bool operator==(const Point& p);
	bool operator!=(const Point& p);

	friend Point operator+(int val, const Point& p);
	friend Point operator-(int val, const Point& p);
	friend ostream& operator<<(ostream& os, const Point& p);
	friend istream& operator>>(istream& is, Point& p);
};

#endif