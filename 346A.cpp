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
#include<math.h>
using namespace std;

ll gcd(ll int a, ll int b)
{
	while(a && b && a!=b) 
	{
		if(a > b)
		{
			a = a%b;
		}
		else if(b > a)
		{
			b = b%a;
		}
	}
 	return (a!=0) ? a :b;
}


int main()
{
	int n;
	cin>>n;
	ll a,b;
	cin>>a>>b;
	ll max_ = max(a,b);
	
	ll gcd_ = gcd(a,b);
	
	for(int i=2 ; i< n  ; i++ )
	{
		cin>>a;
		gcd_ = gcd(gcd_,a);
		if(a>max_)
		max_ =a;
	}
	((max_/gcd_ - n) % 2 == 1) ? cout<<"Alice": cout<<"Bob";  
	return 0;
}

