#include "MyIntStack.h"

void main() {
	MyIntStack a(5);
	int value;

	for(int i=0; i< 5; i++ )
	{
		cout<< "���ÿ� ���� �� �Է� >>> ";
		cin>>value;

		if(!a.push(value)) 
			cout<< "����full \n";
		else
			cout<< "[���� �Ϸ�]" << endl;
	}

	MyIntStack b = a;

	cout<< "[�Ϸ�]" << endl;

	if( a.pop( value ))
		cout<< "����a��������: " << value << endl;
	
	for( int i=0; i< 6; i++ ){
		if( b.pop( value )){
			cout<< "����b��������: " << value << endl;
		}
	}
}