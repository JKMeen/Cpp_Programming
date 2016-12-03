#include "Point.h"

Point Point::operator+(const Point& p){
	Point tmp;
	tmp.x = this->x + p.x;
	tmp.y = this->y + p.y;

	return tmp;
}

Point Point::operator+(const int v){
	Point tmp;
	tmp.x = this->x + v;
	tmp.y = this->y + v;

	return tmp;
}

Point Point::operator-(const Point& p){
	Point tmp;
	tmp.x = this->x - p.x;
	tmp.y = this->y - p.y;

	return tmp;
}

Point Point::operator-(const int v){
	Point tmp;
	tmp.x = this->x - v;
	tmp.y = this->y - v;

	return tmp;
}

// 전위 연산자
Point Point::operator++(){
	this->x++;
	this->y++;
	return *this;
}

Point Point::operator--(){
	this->x--;
	this->y--;
	return *this;
}

// 후위 연산자
Point Point::operator++ (int x){
	Point tmp = *this;
	this->x++;
	this->y++;
	return tmp;
}

Point Point::operator-- (int x){
	Point tmp = *this;
	this->x--;
	this->y--;
	return tmp;
} // --bool Point::operator<(const Point& p){}

// 비교 연산자
bool Point::operator==(const Point& p){
	if (this->x == p.x && this->y == p.y)
		return true;
	return false;
}

bool Point::operator!=(const Point& p){
	if (this->x != p.x && this->y != p.y)
		return true;
	return false;
}


// friend
Point operator-(int val, const Point& p){
	Point tmp;
	tmp.x = val - p.x;
	tmp.y = val - p.y;
	return tmp;
}

Point operator+(int val, const Point& p){
	Point tmp;
	tmp.x = val + p.x;
	tmp.y = val + p.y;
	return tmp;
}

ostream& operator<<(ostream& os, const Point& p){
	os << "[ " << p.x << ", " << p.y << " ]" << endl;
	return os;
}

istream& operator>>(istream& is, Point& p){
	cout << endl;
	cout << "input x >> ";
	is >> p.x;
	cout << "input y >> ";
	is >> p.y;
	cout << "[ " << p.x << ", " << p.y << " ]" << endl << endl;
	return is;
}