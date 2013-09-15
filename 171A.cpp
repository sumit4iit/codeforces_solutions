#include<iostream>
using namespace std;
int rev(long long int a)
{
	int sum =0;
	while(a!=0)
	{
		sum = sum*10 + a%10;
		a= a/10;
	}
	return sum;
}
int main()
{
	long long int a;
	long long int b;
	cin>>a>>b;
	b = rev(b);
	cout << a+b;
	return 0;	
}
