#include <iostream>
#include <string>

using namespace std;
/*
// call by value
void swap ( string str1, string str2 ){
	string tmp;

	tmp = str1;
	str1 = str2;
	str2 = tmp;
}*/

// call by address
void swap ( string *str1, string *str2 ){
	string tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

// call by reference
void swap ( string &str1, string &str2 ){
	string tmp;

	tmp = str1;
	str1 = str2;
	str2 = tmp;
}

void main()
{
	string str1("Game"), str2("Engineering");

	cout << "str1 >>> " << str1 << ", str2 >>> " << str2 << endl;
	/*swap(str1, str2);
	cout << "str1 >>> " << str1 << ", str2 >>> " << str2 << endl;*/
	swap(str1, str2);
	cout << "str1 >>> " << str1 << ", str2 >>> " << str2 << endl;
	swap(&str1, &str2);
	cout << "str1 >>> " << str1 << ", str2 >>> " << str2 << endl;
}