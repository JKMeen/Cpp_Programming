#include "Sample.h"

void Sample::read(){
	cout << this->size<<"개 정수 입력 >>>";
	for (int i=0; i<this->size; i++){
		cin >> this->p[i];
	}
} // 100 600 199 605 10

void Sample::write(){
	for (int i=0; i<this->size; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big(){
	int bigsize = p[0];
	for (int i=0; i<this->size; i++){
		if (bigsize <= p[i]){
			bigsize = p[i];
		}
	}
	return bigsize;
}

Sample::~Sample(){
	delete [] p;
}