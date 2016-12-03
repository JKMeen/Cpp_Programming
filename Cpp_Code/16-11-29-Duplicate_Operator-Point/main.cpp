#include "Point.h"

void main()
{
	Point p1(3,5), p2(5,5), p3;
	cout << "p1 >>> " << p1 << "p2 >>> " << p2 << "p3 >>> " << p3 << endl;

	p3 = p1+p2;
	cout << "p3=p1+p2 연산 후 결과 p3 >>> " << p3;

	p1 = p1 + 10;
	cout << "p1=p1+10 연산 후 결과 p1 >>> " << p1;

	p2 = 100 - p2;
	cout << "p2=20-p2 연산 후 결과 p2 >>> " << p2;

	cout << endl;

	Point p4, p5;
	cout << "<p4를 입력>";

	cin >> p4;
	p5 = p4++;
	cout << "p5 = p4++; 수행 후" << endl;
	cout << "p5 >>> " << p5 << "p4 >>> " << p4 << endl ;

	if( p5 == p4 ) cout << "두 점 p5, p4의 좌표가 같습니다.\n";
	else cout << "두 점 p5, p4의 좌표가 다릅니다.\n";

	cout << endl;

	p3 = ++p1 + p2--;
	cout << "p3 = ++p1 + p2--; 수행 후" << endl;
	cout << "p1 >>> " << p1 << "p2 >>>" << p2 << "p3 >>> " << p3 << endl ;
}