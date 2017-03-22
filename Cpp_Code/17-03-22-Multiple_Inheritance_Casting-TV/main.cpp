#include "TV.h"

int main(void){
	SmartTV mytv("120. 11. 22. 1", 64);

	cout << "크기 >>> " << mytv.getSize() << endl;
	cout << "비디오 유무 >>> " << mytv.getVideoIn() << endl;
	cout << "ip주소 >>> " << mytv.getipAddress() << endl;

	return 0;
}