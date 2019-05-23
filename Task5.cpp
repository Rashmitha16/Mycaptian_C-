#include<iostream>
using namespace std;
main()
{
	int n,a[10],large,small,i;
	cout<<"Enter no of elements:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	large=a[0];
	small=a[0];
    for(i=0;i<n;i++){
	if(a[i]>large)
	{
		large=a[i];
	}	
	else
	small=a[i];
   }
   cout<<"Largest element is "<<large;
   cout<<"\nSmallest element is "<<small;
}
