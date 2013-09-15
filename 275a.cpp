#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;


int main()
{
//	int a[3][3];
	int b[3][3];
	int temp = 0;
	for(int i= 0 ;i< 3 ; i++)
	{
		for(int j = 0 ; j< 3 ; j++)
		b[i][j] = 1;
	}
	
	for(int i= 0 ;i< 3 ; i++)
	{
		for(int j = 0 ; j< 3 ; j++)
		{	
			scanf("%d",&temp);	
			if(temp%2 == 1)
			{
				if(b[i][j] == 0) b[i][j] = 1;
				else b[i][j]  = 0;				
				if(i>0)
				{
					if(b[i-1][j] == 0) b[i-1][j] = 1;
					else b[i-1][j]  = 0;
				}
				if(i<2)
				{
					if(b[i+1][j] == 0) b[i+1][j] = 1;
					else b[i+1][j]  = 0;
				}
				if(j>0)
				{
					if(b[i][j-1] == 0) b[i][j-1] = 1;
					else b[i][j-1]  = 0;
				}
				if(j<2)
				{
					if(b[i][j+1] == 0) b[i][j+1] = 1;
					else b[i][j+1]  = 0;
				}
			}
		}
	}
	
	for(int i=0 ; i< 3 ; i++)
	{
		for(int j=0 ; j< 3; j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
