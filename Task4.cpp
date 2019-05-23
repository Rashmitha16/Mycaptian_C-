#include<iostream>
using namespace std;
main()
{
	int n,a[10],sum=0,i;
	cout<<"Enter no of elements:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"Sum of array elements is"<<sum;
}
