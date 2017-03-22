#include "Point.h"

#ifndef COLORPOINT_H
#define COLORPOINT_H

class ColorPoint : public Point{
private:
	string color;

public:
	void setColor(string color){
		this->color = color;
	}
	void showColor(){
		cout << this->color << " >>> ";
		showPoint();
	}
};

#endif