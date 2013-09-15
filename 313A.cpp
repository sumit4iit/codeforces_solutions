#include<iostream>
using namespace std;

int main()
{
	long long a;
	cin>>a;
	if(a>0)
	cout<< a;
	else
	{
		if((a%10)+(a/100)*10 > a/10 )
		cout<<(a%10)+(a/100)*10 ;
		else
		cout<<a/10;
	}
	
	return 0;
}
