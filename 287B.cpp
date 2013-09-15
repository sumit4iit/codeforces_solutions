#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	ll n, k;
	
	cin>>n>>k;
	n--;
	int count = 0;
	if ( ( k*(k-1) )/2 < n)
	{
		cout<<"-1";
		return 0;
	} // correct!!
	else
	{
		ll t = 2;
	 	ll k1 = k;
		while(n!= 0)
		{
			 if(n<k1)
			 {
			 	count++;
			    n=0;
			 }
			 else
			 {	
			 	ll temp = (t+k1) / 2;
			 	ll tnum = k1 - temp + 1;
 			 	ll sum  = tnum*(tnum+1) / 2 + (temp -1) * tnum; 
			 	if(n >  sum-tnum)
				{
			 		n = n -sum + tnum;
			 		k1 = temp -1;
			 		count += tnum;
			 	}
			 	else if(n == sum-tnum)
			 	{
			 		n= 0;
					count += tnum;
			 	}
			 	else
			 	{
					if(t!= temp)		 	
			 		t = temp;
			 		else
			 		t++;
			 	}
			 }
		}
	}
	cout<<count;
	
	
	return 0;
}
