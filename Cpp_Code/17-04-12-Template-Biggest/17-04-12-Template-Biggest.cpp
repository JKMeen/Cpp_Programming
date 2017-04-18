#include <iostream>
#include <string>
using namespace std;

template <typename T>
//template <class T> �� �����־ �ȴ�.

T biggest(T data[], int n){
	T big = data[0];
	for (int i=0; i<n; i++)
		if (big < data[i])
			big = data[i];
	return big;
}

void main(){
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl; //5�� �迭 x�� ũ��

	double y[] = {6.4, 3.3, -200.6, 7.7, 8.8, 20.3};
	cout << biggest(y, 6) << endl;

	char c[] = {'b', 'c', 'z', 's', 'q', 'u'};
	cout << biggest(c, 6) << endl;

	string s[] = {"ȫ�浿", "�ڱ���", "��û", "�����"};
	cout << biggest(s, 4) << endl;
}