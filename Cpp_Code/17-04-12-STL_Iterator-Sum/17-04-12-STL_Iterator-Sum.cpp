#include <iostream>
#include <vector>
using namespace std;

void main(){
	vector<int> data;
	int value;

	// vector�� ���� �Է�
	while(true){
		cout << "���� �Է� (-1�̸� stop) >>> ";
		cin >> value;
		if (value == -1) break;
		data.push_back(value);
	}

	//vector<int>::const_iterator it; 
	//const�� ������ ��� �� ���� �Ұ�

	// �հ� ���ϱ�
	vector<int>::iterator it; // it�� ������

	cout << "������ ũ�� >>> " << data.size() << endl;
	//it = data.begin(); // ���� ����
	for (it = data.begin(); it < data.end();it++){
		*it += 10;
		cout << *it << " ";
	}

	//for (int i=0; i< data.size(); i++){
		/*if (*it >= 100){ // it�� 100�̻��̸� ����
			it--;
			cout << *it << " : " << data.capacity() << endl;
			data.erase(it+1);
		}
		else if (*it < 100){
			cout << *it << " : " << data.capacity() << endl;
			sum += *it;
		}
	}*/
}