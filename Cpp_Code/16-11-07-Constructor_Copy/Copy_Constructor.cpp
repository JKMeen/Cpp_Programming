#include "Copy_Constructor.h"

int main() {
	Circle src(30); // src ��ü��  ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ�� 

	cout << "������ ���� = " << src.getRadius() << endl;
	cout << "�纻�� ���� = " << dest.getRadius() << endl;
}