//Anuja Alkari
//Write a program to display Fibonacci Series upto nth term. (Using loops).

#include<iostream>
using namespace std;

int main()
{
	int n, n1 = 0, n2 = 1, nt = 0;
	
	cout<<" Enter Number of Terms : "<<endl;
	cin>>n;
	
	cout<<" Fibonacci Series upto" << n << "th term"<<endl;
	
	for( int i = 1;i <= n; i++)
	{
		if( i == 1)
		{
			cout<< n1 <<" , ";
			continue;
		}
		
		if( i == 2)
		{
			cout<< n2 <<" , ";
			continue;
		}
		
		nt = n1 + n2;
		n1 = n2;
		n2 = nt;
		cout << nt << ", ";		
	}
	
	return  0;
}


