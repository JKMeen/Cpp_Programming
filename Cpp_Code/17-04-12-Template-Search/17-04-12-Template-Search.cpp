#include <iostream>
#include <string>
using namespace std;

template <typename T>
//template <class T> �� �����־ �ȴ�.

bool search (T search, T b[], int n){
	for (int i=0; i<n; i++)
		if (search == b[i])
			return true;

	return false;
}

void main(){
	int x[] = {1, 10, 100, 5, 4};
	if (search(100, x, 5)) // 100�� �迭 x�� ���ԵǾ� �ִ°�?
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�." << endl;
	else
		cout << "100�� �迭 x�� ���ԵǾ����� �ʴ�." << endl;

	char c[] = {'h', 'e', 'l', 'l', 'o'};
	if (search('e', c, 5)) // 100�� �迭 x�� ���ԵǾ� �ִ°�?
		cout << "e�� �迭 x�� ���ԵǾ� �ִ�." << endl;
	else
		cout << "e�� �迭 x�� ���ԵǾ����� �ʴ�." << endl;
}