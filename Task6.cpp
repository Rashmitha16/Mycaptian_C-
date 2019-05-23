#include<iostream>
using namespace std;
main()
{
	int n,a[20],i,j;
	cout<<"Enter the no of elements:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i = 0; i < n; i++)                     
	{
		for (j = 0; j < n; j++)             
		{
			if (a[j] > a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}  
		}
	}
	cout<<"\n\nAscending :";                  
	for (i = 0; i < n; i++)                     
	{
		cout<<a[i];
	}
}
