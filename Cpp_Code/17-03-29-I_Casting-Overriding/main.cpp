#include "Shape.h"

void main(){
	Shape *sp0, *sp1, *sp2, *sp3;
	Shape S;
	Circle C;
	Line L;
	Rectangle R;

	sp0 = &S;
	sp1 = &C;
	sp2 = &L;
	sp3 = &R;

	cout << "[동적바인딩]" << endl;
	sp0->paint();
	sp1->paint();
	sp2->paint();
	sp3->paint();
	////////////////////////////////
	cout << "\n[범위지정 연산자]" << endl;
	sp1->Shape::draw();
	sp2->Shape::draw();
	sp3->Shape::draw();

}