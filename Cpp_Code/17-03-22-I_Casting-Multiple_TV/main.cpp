#include "TV.h"

int main(void){
	SmartTV mytv("120. 11. 22. 1", 64);

	cout << "ũ�� >>> " << mytv.getSize() << endl;
	cout << "���� ���� >>> " << mytv.getVideoIn() << endl;
	cout << "ip�ּ� >>> " << mytv.getipAddress() << endl;

	return 0;
}