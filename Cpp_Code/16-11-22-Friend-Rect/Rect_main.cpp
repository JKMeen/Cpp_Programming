#include "rect.h"

bool equal(Rect r, Rect s){
	if (r.width == s.width && r.height == s.height)
		return true;
	else return false;
};

void main(){
	Rect r1(10, 20), r2;
	RectManager man;

	if (man.equal(r1, r2)) cout << "������ �簢��\n";
	else cout << "�ٸ� �簢��\n";
}