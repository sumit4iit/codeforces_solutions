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
	cin>>n;
	int w[100] ={0};
	for(int i=1; i<= n; i++)
	{
		cin>>w[i];
	}
	int m,x,y;
	cin>>m;
	for(int i=0; i< m; i++)
	{
		cin>>x>>y;
		if(x>1 && x<n)
		{
			w[x-1] =  w[x-1] + y-1;
			w[x+1] = w[x+1] + w[x] - y; 
			w[x] =0;
		}
		else if(x==1)
		{
			w[x+1] = w[x+1] + w[x] - y; 
			w[x] =0;
		}
		else if(x==n)
		{
			w[x-1] =  w[x-1] + y-1;
			w[x] =0;
		}		
	}
	for(int i=1; i<= n; i++)
	{
		cout<<w[i]<<endl;
	}
	
	
	return 0; 
}
