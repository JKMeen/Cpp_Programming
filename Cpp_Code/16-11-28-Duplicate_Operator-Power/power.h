#include <iostream>

using namespace std;

class Power {
	int kick, punch;
public:
	Power(int k = 0, int p = 0) {
		kick = k; punch = p;
	}
	void show() {cout << kick << " " << punch << endl;}
	Power operator+ (Power a); // 객체+객체
	Power operator+(int a); // 객체+상수

	// 비교 연산자
	bool operator== (Power a);
	bool operator< (Power a);

	// 복합 연산자
	Power operator+=(Power a);

	Power operator++(); // 전위 연산자
	Power operator++(int x); // 후위 연산자

	// 상수 + 객체 일 경우, friend를 사용
	friend Power operator+(int op1, Power op2);
	
	// 단항 연산자, 부정
	friend bool operator!(Power op1);

	// 입출력
	friend ostream& operator<< ( ostream& os, Power a );
	friend istream& operator>> ( istream& is, Power a );
};