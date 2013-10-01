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

int main()
{
	ll int n;
	scanf("%d",&n);
	ll grp = 1;
	char p,t;
	scanf("%c",&p);
	for(int i=1 ; i< 2*n ; i++)
	{
		scanf("%c",&t);
		if(t==p)
		{
			grp++;
		}
		p = t;
	}
	printf("%d",grp);
	return 0;
}

