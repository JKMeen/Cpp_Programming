#include "Point.h"

void main()
{
	Point p1(3,5), p2(5,5), p3;
	cout << "p1 >>> " << p1 << "p2 >>> " << p2 << "p3 >>> " << p3 << endl;

	p3 = p1+p2;
	cout << "p3=p1+p2 ���� �� ��� p3 >>> " << p3;

	p1 = p1 + 10;
	cout << "p1=p1+10 ���� �� ��� p1 >>> " << p1;

	p2 = 100 - p2;
	cout << "p2=20-p2 ���� �� ��� p2 >>> " << p2;

	cout << endl;

	Point p4, p5;
	cout << "<p4�� �Է�>";

	cin >> p4;
	p5 = p4++;
	cout << "p5 = p4++; ���� ��" << endl;
	cout << "p5 >>> " << p5 << "p4 >>> " << p4 << endl ;

	if( p5 == p4 ) cout << "�� �� p5, p4�� ��ǥ�� �����ϴ�.\n";
	else cout << "�� �� p5, p4�� ��ǥ�� �ٸ��ϴ�.\n";

	cout << endl;

	p3 = ++p1 + p2--;
	cout << "p3 = ++p1 + p2--; ���� ��" << endl;
	cout << "p1 >>> " << p1 << "p2 >>>" << p2 << "p3 >>> " << p3 << endl ;
}