#include<iostream>
using namespace std;
void swap(int a,int b);
main()
{
	int a,b;
	cout<<"enter the a,b values: ";
	cin>>a>>b;
	swap(a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"The values are "<<a<<b;
}


