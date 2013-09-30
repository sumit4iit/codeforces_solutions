#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>

#include<vector>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long

#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	ll int m;
	cin>>m;
	ll int min = 100005;
	ll int a[10];
	for(int i = 1 ; i< 10; i++)
	{
		cin>>a[i];
		min = (a[i]<min)?a[i]:min;
	}
	if(m< min)
	{
		cout<<"-1";
	}
	
	ll n = m/min;
	
	while(n--)
	{
		for(int i=9; i>0; i--)
		{
			if((m-a[i])/min >= n && m-a[i]>=0)
			{
				cout<<i;
				m = m - a[i];
				break;
			}
		}
	}
	return 0;
}

