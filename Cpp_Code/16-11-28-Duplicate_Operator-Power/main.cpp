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

// �� ������
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

// ���� ������
Power Power::operator+=(Power a){
	this->kick += a.kick;
	this->punch += a.punch;
	return *this;
}

// ���� ������
Power Power::operator++(){
	this->kick++;
	this->punch++;
	// this��ü�� �����Ͷ� *�� �ٿ������
	return *this;
}

// ���� ������
Power Power::operator++(int x){
	Power tmp = *this;
	this->kick++;
	this->punch++;
	// this��ü�� �����Ͷ� *�� �ٿ������
	return tmp;
}

// ��� + ��ü
Power operator+(int op1, Power op2){
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

// ���� ������, ����
bool operator!(Power op1){
	if (op1.kick != 0 && op1.punch != 0){
		return true;
	}
	return false;
}

// �����
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
		cout << "�� �Ŀ��� �����ϴ�\n";
	}
	else {
		cout << "�� �Ŀ��� �ٸ��ϴ�\n";
	}
	if(lee < kim) {
		cout << "kim�� �Ŀ��� ���ϴ�\n";
	}
	else {
		cout << "lee�� �Ŀ��� ���ϴ�\n";
	}

	park++;
	cout << "park�� ������ >>>";
	park.show();*/
}