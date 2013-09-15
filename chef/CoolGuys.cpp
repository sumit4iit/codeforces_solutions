#include<iostream>
#include<cstdio>
#define ull unsigned long long
#define ll long long 
using namespace std;

ll gcd(ll a, ll b)
{
	while(a!=b)
	{
		if(a > b )
		{
			a =a -b;
		}
		if( b >a )
		{
			b = b - a;
		}
	}
	return a;	
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		ll N;
		cin>>N;
		ll pre = N;
		ll count =0;
		ll int i;	
		for(i =1; i*i<= N ; i++)
		{
			count += N/i;
			count += (pre - N/i) * (i-1);
			pre = N/i;
		}
		i--;
		count+= (pre-i)*i;				
		ull square = N*N;
		
		// this is really cool way to take gcd of big numbers!!
		ll gcd_  = gcd(count,N);
		gcd_ *= gcd(count/gcd_, N);
		
		// ull gcd_ = gcd(count,square);
		cout<<count/gcd_ << "/" <<square/gcd_<<endl;
		
		T--;
	}
}
