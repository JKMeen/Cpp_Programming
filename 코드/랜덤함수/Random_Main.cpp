#include "Random.h"
#include <iostream>
using namespace std;
#define RAND_MAX 32767

void main(){
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for(int i=0; i<10; i++){
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for(int i=0; i<10; i++){
		int n = r.nextlnRange(2,10); // 2���� 10 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}