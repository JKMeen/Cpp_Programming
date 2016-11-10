#include "Person.h"

void main(){
	Person prof(100, "조광민");
	Person student(prof);
	Person student1(200, "홍길동");

	prof.show("prof");
	student.show("student");
	student1.show("student1");

	prof.show("prof");
	student.show("student");

	cout << "char로 수정 후 " << endl;
	student.changeName("배인성");
	student.show("student");

	cout << "클래스로 수정 후 " << endl;
	student.changeName(student1);
	student.show("student");

	
}