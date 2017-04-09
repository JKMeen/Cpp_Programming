#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"

template <typename T>
void myswap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void main() {
	/* int ���� */
	int a = 20, b = 200;
	myswap(a, b);
	cout << "/* int Swap */" << endl;
	cout << "a >>> " << a << endl;
	cout << "b >>>" << b << endl << endl;

	/* string ���� */
	string str1 = "��浿", str2 = "����浿";
	myswap(str1, str2);
	cout << "/* string Swap */" << endl;
	cout << "str1 >>> " << str1 << endl;
	cout << "str2 >>> " << str2 << endl << endl;

	/* char ���� */
	char c1 = 'A', c2 = 'F';
	myswap(c1, c2);
	cout << "/* char Swap */" << endl;
	cout << "c1 >>> " << c1 << endl;
	cout << "c2 >>> " << c2 << endl << endl;

	/* ��ü ���� */
	Circle p(30), pp(3);
	myswap(p, pp);
	cout << "/* instance Swap */" << endl;
	cout << " p ������ >>> " << p.getRadius() << endl;
	cout << "pp ������ >>> " << pp.getRadius() << endl;
	cout << " p ���� >>> " << p.getArea() << endl;
	cout << "pp ���� >>> " << pp.getArea() << endl << endl;
}