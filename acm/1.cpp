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
	int N;
	cin>>N;
	int temp;
	ll cur_max = 0;
	ll max = 0;
	int ntv = -1111;
	while(N != 0)
	{
		cur_max = 0;
		max = 0;
		ntv = -1111;
		for(int i=0 ; i< N ; i++)
		{
			scanf("%d",&temp);

			
			if(cur_max + temp > 0)
			{
				cur_max += temp;
			}
			else
			{
				cur_max = 0;
			}

			if(cur_max > max)
				max = cur_max;
			
			
			if(temp>ntv)
			{
				ntv = temp;
				
			}
			
		}
		
		if(ntv<0)
		{
			printf("%d\n",ntv);
		}
		else 
		printf("%d\n",max);

		cin>>N;
	}
	
	return 0;
}

