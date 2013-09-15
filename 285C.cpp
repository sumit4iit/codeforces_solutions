#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	long long int a[300006];
	long long int n;
	cin>>n;
	for(long long int i= 0 ; i< n ; i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);

	long long int sum = 0;
	for(long long int i = 0; i< n ; i++)
	{
		sum = sum+ abs(i+1 - a[i]);
	}
	
	cout<<sum;
	return 0;
}
