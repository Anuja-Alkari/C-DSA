#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" Enter Total Number : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int grade;
		cout<<" Enter Grade : "<<endl;
		cin>>grade;
		if(grade >=38)
		{
			int rem=grade%5;
			if(rem>= 3)
			{
				grade+= 5-rem;
			}
		}
		cout<<grade<<endl;
	}
	return 0;
}
