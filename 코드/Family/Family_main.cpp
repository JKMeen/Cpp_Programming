#include "Family.h"

void main(){
	Family *simpson = new Family(); // 3������ ������ Simpson ���� 
	simpson->setName();
	simpson->show();
	delete simpson;
}