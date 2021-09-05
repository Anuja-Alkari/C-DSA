//Anuja Alkari
//Program to Swap Two Numbers 

#include<iostream>
using namespace std;

int main()
{
	int a = 15 , b = 25	, temp;
	
	cout<<"Before Swapping..."<<endl;
	cout<<"a = "<< a <<"b = "<< b <<endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<" After Swapping..."<<endl;
	cout<<"a = "<< a <<"b = "<< b <<endl;
	
	return 0;
	
}
