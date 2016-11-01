#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color{
	int red, green, blue;

public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b){
		red = r; green = g; blue = b;
	}

	void setColor(int r, int g, int b);
	
	void show();
};

#endif