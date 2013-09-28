#include<iostream>
using namespace std;
#define ull unsigned long long

int main()
{
	ull a,b;
	cin>>a>>b;
	ull count = 0;
	while(a && b)
	{
		if(a>b)
		{
			count+= a/b;
			a = a%b;
		}
		else
		{
			count+=b/a;
			b = b%a;
		}
	}
	cout<<count;
}
