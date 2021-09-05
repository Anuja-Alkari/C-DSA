//Anuja Alkari
//Write a program to check whether a year entered by a user is Leap year or not.

#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout<< " Enter the Year : "<<endl;
	cin>> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || ( year % 400 ==0))
	{
		cout<<" Yess You have One extra Day This Year!! This is Leap Year"<<endl;
	}
	
	else 
	{
		cout<< "This is not a Leap Year."<<endl;
	}
	
	return 0;
}
