#include <iostream>
using namespace std;

int findMedian(int a[], int n){
	return a[n/2];
}

int findMedian(int a[], int n, int end){
	return a[end/2];
}

int findMedian(int a[], int n, int start, int end){
	return a[(end-start)/2+start];
}

int main()
{
	int a[]={0,10,20,30,40,50,60,70,80,90,100};
	int n=11;
	cout<<"�迭���߾Ӱ�:"<< findMedian(a, n)<<endl;
	cout<<"�迭0����6�������߾Ӱ�:"<<findMedian(a,n, 6)<<endl;
	cout<<"�迭1����7�������߾Ӱ�:"<<findMedian(a,n, 1, 7)<<endl;
	return 0;
}
// ���� : 12�� 20�� 11�� 520