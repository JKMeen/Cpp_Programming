#include "MyIntStack.h"

void main() {
	MyIntStack a(5);
	int value;

	for(int i=0; i< 5; i++ )
	{
		cout<< "스택에 넣을 값 입력 >>> ";
		cin>>value;

		if(!a.push(value)) 
			cout<< "스택full \n";
		else
			cout<< "[스택 완료]" << endl;
	}

	MyIntStack b = a;

	cout<< "[완료]" << endl;

	if( a.pop( value ))
		cout<< "스택a에서삭제: " << value << endl;
	
	for( int i=0; i< 6; i++ ){
		if( b.pop( value )){
			cout<< "스택b에서삭제: " << value << endl;
		}
	}
}