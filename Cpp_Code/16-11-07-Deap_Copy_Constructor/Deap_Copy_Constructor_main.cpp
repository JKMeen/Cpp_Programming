#include "Person.h"

void main(){
	Person prof(100, "������");
	Person student(prof);
	Person student1(200, "ȫ�浿");

	prof.show("prof");
	student.show("student");
	student1.show("student1");

	prof.show("prof");
	student.show("student");

	cout << "char�� ���� �� " << endl;
	student.changeName("���μ�");
	student.show("student");

	cout << "Ŭ������ ���� �� " << endl;
	student.changeName(student1);
	student.show("student");

	
}