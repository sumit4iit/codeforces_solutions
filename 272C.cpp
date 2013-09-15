#include<cstdio>

#define ll long long
#define il(i,a,b) for(i=a ; i<b ; i++ )
#define dl(i,a,b) for(i=a; i>b ; i-- )
#define lo(i,a) for(i=0; i<a ; i++ )

using namespace std;


int main()
{
	ll n;
	scanf("%I64d",&n);
	ll stairs[n];
	int i;
	il(i,1,n+1)
	{
		scanf("%I64d",&stairs[i]);
	}
	
	ll m;
	scanf("%I64d",&m);	
	ll ht = 0;
	lo(i,m)
	{
		ll w, h;
		scanf("%I64d,%I64d",&w,&h);	
		if(stairs[w] > ht)
		{
			printf("%I64d",stairs[w]);
			ht = stairs[w] + h;			
		}
		else
		{
			printf("%I64d",ht);
			ht = ht+ h;
		}

	}
}

