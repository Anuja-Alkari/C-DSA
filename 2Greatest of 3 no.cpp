//Anuja Alkari
// a program to find the largest number among three numbers entered by the user.

#include<iostream>
using namespace std;

int main()
{
	int no1 , no2 ,no3 ;
	cout<<" Enter the value for number 1 "<<endl;
	cin>>no1;
	cout<<" Enter the value for number 2 "<<endl;
	cin>>no2;
	cout<<" Enter the value for number 3 "<<endl;
	cin>>no3;
	
	if (no1>no2 && no1>no3)
	{
		cout<<" First Number is Greastest which is "<<no1<<endl;
	}
	
	else if ( no2>no1 && no2>no3)
	{
		cout<<" Second Number is Greastest which is "<<no2<<endl;
	}
	
	else
	{
		cout<<" Third Number is Greastest which is "<<no3<<endl;
	}
	
	return 0;
}
