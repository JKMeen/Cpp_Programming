#include <iostream>
#include <vector>
using namespace std;

void main(){
	vector<int> data;
	int value;

	// vector에 정수 입력
	while(true){
		cout << "정수 입력 (-1이면 stop) >>> ";
		cin >> value;
		if (value == -1) break;
		data.push_back(value);
	}

	//vector<int>::const_iterator it; 
	//const로 선언할 경우 값 변경 불가

	// 합계 구하기
	vector<int>::iterator it; // it는 포인터

	cout << "벡터의 크기 >>> " << data.size() << endl;
	//it = data.begin(); // 시작 지점
	for (it = data.begin(); it < data.end();it++){
		*it += 10;
		cout << *it << " ";
	}

	//for (int i=0; i< data.size(); i++){
		/*if (*it >= 100){ // it가 100이상이면 삭제
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