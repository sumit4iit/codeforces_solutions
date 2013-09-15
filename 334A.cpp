#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int a[105];
	a[0] = 1;
	cout<<a[0]<<" ";
	for(int i=1 ; i< n; i++)
	{
		if(i%2== 1)
		{
			a[i] = a[i-1] + (n-1)*2+1;
			cout<<a[i]<< " ";
		}
		else
		{
			a[i] = a[i-1]+1;
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	
	for(int i = 1; i< n ; i++)
	{
		for(int j = 0 ; j<n; j++)
		{
			if(j%2 == 0)
			{
				a[j]++;
				cout<<a[j]<<" ";
			}
			else
			{
				a[j]--;
				cout<<a[j]<< " " ;
			}
		}
		cout<<endl;
	}
	return 0;
}

