#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	int a[100005];
	int n,m;
	cin>>n>>m;
	for(int i=0 ; i<m ; i++)
	{
		cin>>a[i];
	}
	
	long long sum = a[0];
	
	for(int i=1 ;i< m ; i++)
	{
		if(a[i] > a[i-1])
		{
			sum = sum + a[i] - a[i-1];
		}
		else if(a[i] < a[i-1])
		{
			sum = sum + n + a[i] - a[i-1];
		}
	}	
	cout<< sum-1;
	return 0;
}

