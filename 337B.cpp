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

int gcd(int a , int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a = a-b;
		}
		else
		{
			b = b-a;
		}
	}
	return a;
}

void minify(int x, int y)
{
	cout<<x/gcd(x,y) << "/" << y/gcd(x,y);
}


int main()
{
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	
	float res1 = (float(b*c)/a - d);
	
	float res2 = (float(a*d)/b - c);
	
	if(res1 > 0)
	{
		minify(b*c - a*d , c*b);
	}
	else if (res2> 0)
	{
		minify(a*d - b*c , a*d);
	}
	else 
	{
		cout<<0<<"/"<<1;
	}
	
	return 0;
}

