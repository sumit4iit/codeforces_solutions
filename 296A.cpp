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
	int a[110]={0};
	int n=0,t;
	cin>>n;
	for(int i=0; i<n ; i++)
	{
		cin>>t;
		(a[t]) += 1;
	}
	
	for(int i=0; i<=100; i++)
	{
		if(a[i]> ((n+1)/2)+1)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}

