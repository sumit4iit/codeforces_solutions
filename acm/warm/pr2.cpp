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
	int T = 0;
	long long int a[100008] = {0};
	cin>>T;
	while(T)
	{
		int N = 0,Q = 0;
		scanf("%d%d",&N,&Q);

		scanf("%lld",&a[0]);

		for(int i = 1 ; i<N; i++)
		{
			scanf("%lld",&a[i]);
			a[i] = a[i-1]+a[i];
		}

		for(int i=0 ; i< Q ; i++)
		{
			int l = 0,r = 0;
			cin>>l>>r;
			if(l == 0 )  
			{
				printf("%lld",a[r]);
			}
			else
			{
				printf("%lld",a[r] - a[l-1]);
			}
			cout<<endl;
		}
		T--;
	}
	return 0;
}

