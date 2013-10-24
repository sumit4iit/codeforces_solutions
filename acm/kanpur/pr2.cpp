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

int gcd(long long a , long long b)
{
	while(a*b != 0)
	{
		if(a>b)
		a = a%b;
		else
		b = b%a;
	}	
	if(a>0)
	return a;
	else
	return b;
}

int main()
{
	int T;
	cin>>T;
	ll x1,x2,y1,y2;
	while(T)
	{
		cin>>x1>>y1>>x2>>y2;
		if(x1 == x2)
		{
			cout<<0<<endl;
		}
		else if(y1 == y2)
		{
			cout<<0<<endl;	
		}
		else
		{
			long long xdiff = x2 - x1;
			long long ydiff = y2 - y1;
			
			xdiff = abs(xdiff);
			ydiff = abs(ydiff);
			
			long long gcdXY = gcd(xdiff, ydiff);
			xdiff = xdiff / gcdXY;
			ydiff = ydiff / gcdXY;
			
			long long ans = (ydiff-1) + (xdiff-1) + 1;
			ans = ans * gcdXY;
			cout<<ans<<endl;
		}
		T--;
	}	
	return 0;
}

