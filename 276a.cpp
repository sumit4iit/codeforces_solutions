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
	ll n , k , mj = - 1000000000 , f, t , temp;
	cin>>n>>k;
	for(ll i = 0 ; i< n ; i++)
	{
		cin>> f >> t;
		if(t <= k && mj < f)
		{
			mj = f;
		}
		else if(t > k)
		{
			temp = f - (t-k);
			if(mj < temp)
			mj = temp;
		}
	}
	cout<< mj <<endl;
	return 0;
}
