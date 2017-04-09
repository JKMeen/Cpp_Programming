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
	/* int 스왑 */
	int a = 20, b = 200;
	myswap(a, b);
	cout << "/* int Swap */" << endl;
	cout << "a >>> " << a << endl;
	cout << "b >>>" << b << endl << endl;

	/* string 스왑 */
	string str1 = "콩길동", str2 = "콩콩길동";
	myswap(str1, str2);
	cout << "/* string Swap */" << endl;
	cout << "str1 >>> " << str1 << endl;
	cout << "str2 >>> " << str2 << endl << endl;

	/* char 스왑 */
	char c1 = 'A', c2 = 'F';
	myswap(c1, c2);
	cout << "/* char Swap */" << endl;
	cout << "c1 >>> " << c1 << endl;
	cout << "c2 >>> " << c2 << endl << endl;

	/* 객체 스왑 */
	Circle p(30), pp(3);
	myswap(p, pp);
	cout << "/* instance Swap */" << endl;
	cout << " p 반지름 >>> " << p.getRadius() << endl;
	cout << "pp 반지름 >>> " << pp.getRadius() << endl;
	cout << " p 면적 >>> " << p.getArea() << endl;
	cout << "pp 면적 >>> " << pp.getArea() << endl << endl;
}