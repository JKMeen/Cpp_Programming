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
	Point p, *pBase;
	ColorPoint cp, *pDer;

	/*pDer = &cp;
	pBase = pDer; // ��ĳ����

	pDer->setPoint(10, 20);
	pDer->setColor("Red");
	pDer->showColor();*/

	pBase = &p;
	pBase->setPoint(33, 44);
	pDer = (ColorPoint*)pBase; // �ٿ�ĳ����
	pDer->showPoint();

	return 0;
}