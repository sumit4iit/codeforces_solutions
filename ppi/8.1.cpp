#include<iostream>
using namespace std;

int fib[1000];

int fib_(int n)
{
	if(fib[n]!=-1)
	{
		return fib[n];
	}
	else
	{
		fib[n] = fib_(n-1) + fib_(n-2);
		return fib[n];
	}
	
}

int main()
{
	fib[0] = 1;
	fib[1] = 1;
	for(int i =2 ; i< 1000; i++)
	{
		fib[i] = -1;
	}
	cout<<fib_(70);
}
