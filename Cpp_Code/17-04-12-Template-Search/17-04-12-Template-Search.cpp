#include <iostream>
#include <string>
using namespace std;

template <typename T>
//template <class T> 를 적어주어도 된다.

bool search (T search, T b[], int n){
	for (int i=0; i<n; i++)
		if (search == b[i])
			return true;

	return false;
}

void main(){
	int x[] = {1, 10, 100, 5, 4};
	if (search(100, x, 5)) // 100이 배열 x에 포함되어 있는가?
		cout << "100이 배열 x에 포함되어 있다." << endl;
	else
		cout << "100이 배열 x에 포함되어있지 않다." << endl;

	char c[] = {'h', 'e', 'l', 'l', 'o'};
	if (search('e', c, 5)) // 100이 배열 x에 포함되어 있는가?
		cout << "e가 배열 x에 포함되어 있다." << endl;
	else
		cout << "e가 배열 x에 포함되어있지 않다." << endl;
}