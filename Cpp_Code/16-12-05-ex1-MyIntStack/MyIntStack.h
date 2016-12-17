#include <iostream>
using namespace std;

class MyIntStack{
	int *p;//스택메모리로사용할포인터
	int size;//스택의최대크기
	int tos;//스택의탑을가리키는인덱스
public:
	MyIntStack(int size=10);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);//정수n을스택에푸시한다.
	//스택이꽉차있으면false를,아니면true리턴
	bool pop(int &n);//스택의탑에있는값을n에팝한다.
	//만일스택이비어있으면false를,아니면true리턴
};