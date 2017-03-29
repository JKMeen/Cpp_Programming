#include "Shape.h"

void main(){
	Shape *pStart, *pLast;
	pStart = new Circle();
	pLast = pStart;

	pLast = pLast->add(new Rectangle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Rectangle());
	pLast = pLast->add(new Line());

	Shape *p;
	p = pStart;
	while (p != NULL){ // 마지막 객체는 next가 null이기 때문
		p->paint();
		p = p->getNext(); // 다음 주소를 받아옴
	}

}