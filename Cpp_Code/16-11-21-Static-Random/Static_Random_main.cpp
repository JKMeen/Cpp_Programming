#include "Random.h"

void main(){
	Random::seed();

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++){
		cout << Random::nextInt(1, 100) << " ";
	}
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;

	for (int i = 0; i < 10; i++){
		cout << Random::nextAlphabet() << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++){
		cout << Random::nextDouble() << " ";
	}
	cout << endl;
}