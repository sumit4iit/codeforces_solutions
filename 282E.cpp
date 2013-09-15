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
	long long n;
	cin>>n;
	long long int a[100011];
	for(int i=1 ; i< n+1 ; i++)
	{
		cin>>a[i];
	}
	a[n+1] = 0;
	a[0] = 0;
	int i = 0, j = n+1;
	long long hapH = 0, hapA = 0;	
	while( i+1 != j)
	{
		if( (a[i] ^ a[i+1]) > (a[j] ^ a[j-1]))
		{
			hapH += ( a[i] ^ a[i+1]);
			i++;
		}
		else if ( (a[i] ^ a[i+1]) > (a[j] ^ a[j-1]))
		{
			hapA += (a[j] ^ a[j-1]);
			j--;
		}
	}
	cout<<hapA+ hapH;
	return 0;
}
