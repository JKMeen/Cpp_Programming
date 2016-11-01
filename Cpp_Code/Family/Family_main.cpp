#include "Family.h"

void main(){
	Family *simpson = new Family(); // 3명으로 구성된 Simpson 가족 
	simpson->setName();
	simpson->show();
	delete simpson;
}