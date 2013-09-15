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
	int n, m ;
	int f[100];
	cin>>n>>m;
	for(int i=0; i< m ; i++)
	{
		cin>>f[i];
	}
	sort(f, f+m);
	int min = 10000;
	for(int i=0 ; i<= m-n; i++ )
	{
		if(min > f[i+n-1]-f[i])
		{
			min = f[i+n-1]-f[i];
		}
	}
	
	cout<< min;
	return 0;
}

