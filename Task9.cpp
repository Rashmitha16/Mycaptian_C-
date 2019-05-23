#include<iostream>
using namespace std;
main()
{
	int noofdays,years,weeks,days;
	cout<<"Enter no of days:";
	cin>>noofdays;
	years=noofdays/365;
	weeks=(noofdays%365)/7;
	days=(noofdays%365)%7;
	cout<<"Days are :"<<days;
	cout<<"\nYears are :"<<years;
	cout<<"\nweeks are :"<<weeks;

}
