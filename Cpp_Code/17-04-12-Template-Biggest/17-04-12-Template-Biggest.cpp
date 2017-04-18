#include <iostream>
#include <string>
using namespace std;

template <typename T>
//template <class T> 를 적어주어도 된다.

T biggest(T data[], int n){
	T big = data[0];
	for (int i=0; i<n; i++)
		if (big < data[i])
			big = data[i];
	return big;
}

void main(){
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl; //5는 배열 x의 크기

	double y[] = {6.4, 3.3, -200.6, 7.7, 8.8, 20.3};
	cout << biggest(y, 6) << endl;

	char c[] = {'b', 'c', 'z', 's', 'q', 'u'};
	cout << biggest(c, 6) << endl;

	string s[] = {"홍길동", "박근혜", "심청", "손흥민"};
	cout << biggest(s, 4) << endl;
}