#include "ColorPoint.h"

int main() {
	ColorPoint zeroPoint; // Black에 (0, 0) 위치의 점
	zeroPoint.show();

	ColorPoint cp(5, 5, "RED"); 
	cp.setPoint(10, 20); 
	cp.setColor("BLUE"); 
	cp.show();

	return 0;
}
