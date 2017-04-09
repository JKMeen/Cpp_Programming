#include <iostream>
#include <string>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void main() {
	int a = 20, b = 200;
	myswap(a, b);
	cout << "a >>> " << a << "b >>>" << b << endl;

	string str1 = "Äá±æµ¿", str2 = "ÄáÄá±æµ¿";
	myswap(str1, str2);
	cout << "str1 >>> " << str1 << "str2 >>> " << str2 << endl;

	char c1 = 'A', c2 = 'F';
	myswap(c1, c2);
	cout << "c1 >>> " << c1 << "c2 >>> " << c2 << endl;
}