#include <iostream>

using namespace std;

class Power {
	int kick, punch;
public:
	Power(int k = 0, int p = 0) {
		kick = k; punch = p;
	}
	void show() {cout << kick << " " << punch << endl;}
	Power operator+ (Power a); // ��ü+��ü
	Power operator+(int a); // ��ü+���

	// �� ������
	bool operator== (Power a);
	bool operator< (Power a);

	// ���� ������
	Power operator+=(Power a);

	Power operator++(); // ���� ������
	Power operator++(int x); // ���� ������

	// ��� + ��ü �� ���, friend�� ���
	friend Power operator+(int op1, Power op2);
	
	// ���� ������, ����
	friend bool operator!(Power op1);

	// �����
	friend ostream& operator<< ( ostream& os, Power a );
	friend istream& operator>> ( istream& is, Power a );
};