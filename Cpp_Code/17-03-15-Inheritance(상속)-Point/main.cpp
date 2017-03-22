#include "ColorPoint.h"
#include "Point.h"

ostream& operator<<(ostream& os, const Point &p){
	os << "(" << p.x << "," << p.y << ")" << endl;
	return os;
}

istream& operator>>(istream& is, Point &p){
	is >> p.x >> p.y;
	return is;
}

int main(){
	Point p;
	ColorPoint cp;

	p.setPoint(7, 3);
	cout << p;

	cp.setPoint(5, 6);
	//cp.showPoint();

	cp.setColor("Red");
	cp.showColor();

	return 0;
}