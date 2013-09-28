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
	ll int a;
	cin>>a;
	ll int max = 0;
	ll int t;
	for(ll int i= 0; i< a; i++)
	{
		cin>>t;
		if(t > max)
			max = t;
	}
	
	if((max-a)%2 == 0)
		cout<<"Bob\n";
	else
		cout<<"Alice\n";	
	return 0;
}

