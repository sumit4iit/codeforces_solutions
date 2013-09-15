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

char a[52][52];
int main()
{	
	bool flag = false;
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0 ; i< n; i++)
	{
		flag = false;
		for(int j =0 ; j< m ; j ++)
		{
			cin>>a[i][j];
			if(a[i][j] == 'B' && flag == false)
			{
				flag = true;
			}
			else if(a[i][j] == 'B' && flag == true)
			{
				cout<<"YES\n";return 0;
			}
		}
	}
	for(int i=0 ; i< m ; i++)
	{
		flag = false;
		for(int j= 0; j < n ; j++)
		{
			if(a[j][i] == 'B' && flag == false)
			{
				flag = true;
			}
			else if(a[j][i] == 'B' && flag == true)
			{
				cout<<"YES\n";return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;

}
