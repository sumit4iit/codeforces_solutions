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
	int T,N;
	long long int a[10005];
	long long s[10005];
	scanf("%d",&T);
	while(T)
	{
		scanf("%d",&N);
	
		for(int i= 0 ; i< N ; i++)
		{
			scanf("%lld",&a[i]);
		}

		sort(a,a+N);


		s[0] = a[0];
		
		for(int i=1; i< N ; i++)
		{
			
			s[i] = a[i] + s[i-1];
		}		
		
		int i;

		for(i=N-1 ; i>0 ; i--)
		{
			if(a[i] < s[i-1])
			{
				break;
			}
		}
		if(i>1)	
		{
			printf("%d\n",i+1);
		}
		else
		{
			printf("%d\n",-1);
		}
		T--;
	}
	return 0;
}

