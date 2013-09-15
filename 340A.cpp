#include<iostream>
using namespace std;

long long GCD(long long a, long long b)
{
	while(true)
	{
		if(a>b)
		{
			a= a-b;
		}
		else if(b>a)
		{
			b =b-a;
		}
		else
		return a;
	}
}

int main()
{
	long long a,b,x,y;
	cin>>x>>y>>a>>b;	
	long long lcm = (x*y)/GCD(x,y);	
	if(a%lcm != 0)
	cout << (b/lcm - a/lcm) ;
	else
	cout<<(b/lcm - a/lcm) +1;
}
