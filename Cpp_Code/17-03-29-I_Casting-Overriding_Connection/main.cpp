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
	while (p != NULL){ // ������ ��ü�� next�� null�̱� ����
		p->paint();
		p = p->getNext(); // ���� �ּҸ� �޾ƿ�
	}

}