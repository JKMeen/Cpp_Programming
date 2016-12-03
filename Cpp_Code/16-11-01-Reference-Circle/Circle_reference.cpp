#include "Circle.h"

void increaseRadius( Circle &c ){
	c.setRadius( c.getRadius()+10 );
}

void readRadius( Circle &d ){
	double r;
	cout << "Input donut radius >>> ";
	cin >> r;
	d.setRadius( r );
}

void increaseBy( Circle &c, Circle &d ){
	c.setRadius( c.getRadius()+d.getRadius());
}

void main(){
	Circle waffle(50);
	Circle donut;
	cout << "waffle radius >>> " << waffle.getRadius() << endl<< endl;
	increaseRadius( waffle );
	cout << "increase waffle radius >>> " << waffle.getRadius() << endl<< endl;
	readRadius( donut );
	cout << "donut radius >>> " << donut.getRadius() << endl<< endl;

	increaseBy( waffle, donut );
	cout << "waffle radius >>> " << waffle.getRadius() << endl;
	cout << "donut radius >>> " << donut.getRadius() << endl<< endl;
}