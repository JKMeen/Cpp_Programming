#include "ColorPoint.h"

int main() {
	ColorPoint zeroPoint; // Black�� (0, 0) ��ġ�� ��
	zeroPoint.show();

	ColorPoint cp(5, 5, "RED"); 
	cp.setPoint(10, 20); 
	cp.setColor("BLUE"); 
	cp.show();

	return 0;
}
