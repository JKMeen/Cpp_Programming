#include <iostream>
#include <string>

using namespace std;

void main(void)
{
	int value = 100;
	int &ivalue = value;
	//int *pvalue = &value; 
	int *pvalue = &ivalue; // ������ ����ص� ��

	cout << (ivalue+10) << " " << value << endl;

	double dvalue;
	double &dd = dvalue;
	dd = 12.34567;
	cout.precision(9);
	cout << dd << endl;

	string name("������");
	string &cho = name;
	cout << "name >>> " << cho << endl;
}