//Anuja Alkari
//Write a program to check whether a number is Prime or Not.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<" Enter Your Number : "<<endl;
	cin>>n;
	
	bool flag = 0;
	
	for(int i = 2; i<sqrt(n); i++ )
	{
		if( n%i == 0)
		{
			cout<<" The Number is Non-Prime"<<endl;
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<" The Number is Prime"<<endl;
	}
	
	return 0;
}
