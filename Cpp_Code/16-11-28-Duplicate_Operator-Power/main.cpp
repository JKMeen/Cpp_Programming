#include "power.h"

Power Power::operator+ (Power a) {
	Power tmp;
	tmp.kick = this->kick + a.kick;
	tmp.punch = this->punch + a.punch;
	return tmp;
}

Power Power::operator+(int a){
	Power tmp;
	tmp.kick += a;
	tmp.punch += a;
	return tmp;
}

// 비교 연산자
bool Power::operator== (Power a) {
	if(this->kick == a.kick && this->punch == a.punch)
		return true;
	else return false;
}

bool Power::operator< (Power a){
	if (this->kick < a.kick && this->punch < a.punch){
		return true;
	}
	return false;
}

// 복합 연산자
Power Power::operator+=(Power a){
	this->kick += a.kick;
	this->punch += a.punch;
	return *this;
}

// 전위 연산자
Power Power::operator++(){
	this->kick++;
	this->punch++;
	// this자체가 포인터라 *를 붙여줘야함
	return *this;
}

// 후위 연산자
Power Power::operator++(int x){
	Power tmp = *this;
	this->kick++;
	this->punch++;
	// this자체가 포인터라 *를 붙여줘야함
	return tmp;
}

// 상수 + 객체
Power operator+(int op1, Power op2){
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

// 단항 연산자, 부정
bool operator!(Power op1){
	if (op1.kick != 0 && op1.punch != 0){
		return true;
	}
	return false;
}

// 입출력
ostream& operator<< ( ostream& os, Power a ){
	os << "[ " << a.kick << ", " << a.punch << " ]" << endl;
	return os;
}

istream& operator>> ( istream& is, Power a ){
	cout << "input kick >> ";
	is >> a.kick;
	cout << "input punch >> ";
	is >> a.punch;
	cout << "[ " << a.kick << ", " << a.punch << " ]" << endl;
	return is;
}

int main () {
	Power lee(10, 20), park, kim(5, 5);

	park = kim++;
	park.show();
	kim.show();

	kim = 2 + lee;
	kim.show();

	cout << kim << endl;
	cin >> park;

	/*
	park = kim + lee;

	park.show();
	kim.show();
	lee.show();

	if(lee == kim) {
		cout << "두 파워가 같습니다\n";
	}
	else {
		cout << "두 파워가 다릅니다\n";
	}
	if(lee < kim) {
		cout << "kim이 파워가 셉니다\n";
	}
	else {
		cout << "lee가 파워가 셉니다\n";
	}

	park++;
	cout << "park의 전투력 >>>";
	park.show();*/
}