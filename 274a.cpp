#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
/*Macros*/
using namespace std;

int main()
{
	ll k,n,i;
	set<ll> s;
	cin>>n>>k;
	ll temp;
	For(i,n)
	{
		cin>>temp;
		s.insert(temp);
	}
	if(k == 1)
	{
	 cout<<s.size(); return 0;
	}
	tr(s,it)
	{
		if( s.find(*it * k) != s.end() )	s.erase(*it * k);	
	}		
	cout<<s.size();
	return 0;
}
