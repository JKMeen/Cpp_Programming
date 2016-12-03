#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point(int x=0, int y=0) { this->x = x; this->y = y; }
	// const�� ���̴� ���� Ȯ���ϰ� �ϱ� ����
	Point operator+(const Point& p);
	Point operator+(const int v);
	Point operator-(const Point& p);
	Point operator-(const int v);
	
	Point operator++(); //���� ������ ++
	Point operator--(); //���� ������ --

	Point operator++ (int x); //���� ������ ++
	Point operator-- (int x); //���� ������ --bool operator<(const Point& p);

	bool operator==(const Point& p);
	bool operator!=(const Point& p);

	friend Point operator+(int val, const Point& p);
	friend Point operator-(int val, const Point& p);
	friend ostream& operator<<(ostream& os, const Point& p);
	friend istream& operator>>(istream& is, Point& p);
};

#endif