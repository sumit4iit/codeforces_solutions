#include<iostream>
using namespace std;

int fib[1000];

int fib_(int n)
{
	if(n<2)
	return 1;
		return fib_(n-1) + fib_(n-2);
}

int main()
{
	cout<<fib_(70);
}
