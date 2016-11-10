#include "Copy_Constructor.h"

int main() {
	Circle src(30); // src 객체의  보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출 

	cout << "원본의 면적 = " << src.getRadius() << endl;
	cout << "사본의 면적 = " << dest.getRadius() << endl;
}