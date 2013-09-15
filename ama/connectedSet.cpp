#include<iostream>
#include<stack>
#include<set>
#include<map>
#include<vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)

char grid[1010][1010];

void dfs(int n, int i, int j)
{
//	cout<<"i: "<<i<<" j: "<<j<<"\t\n";
	grid[i][j] = '2';
	if(i+1<n && grid[i+1][j] == '1')
	{
		dfs(n,i+1,j);
	}
	if(i+1 < n && j+1 < n && grid[i+1][j+1] == '1')
	{
		dfs(n,i+1,j+1);
	}
	if(j+1 < n && grid[i][j+1] == '1')
	{
		dfs(n,i,j+1);
	}
	if(i-1>=0 && grid[i-1][j] == '1')
	{
		dfs(n,i-1,j);		
	}
	if(j-1>=0 && grid[i][j-1] == '1')
	{
		dfs(n,i,j-1);		
	}
	if(i-1>=0 && j-1>=0 && grid[i-1][j-1] == '1')
	{
		dfs(n,i-1,j-1);		
	}
	if(i+1>=0 && j-1>=0 && grid[i+1][j-1] == '1')
	{
		dfs(n,i+1,j-1);		
	}
	if(i-1>=0 && j+1>=0 && grid[i-1][j+1] == '1')
	{
		dfs(n,i-1,j+1);		
	}

}

int main()
{
	int T;
	scanf("%d",&T);
		
	while(T>0)
	{
		ll count = 0;
		int n;
		scanf("%d",&n);
		// input
		for(int i = 0; i< n ; i++)
		{
			for(int j = 0 ; j< n ; j++)
			{
				cin>>grid[i][j];
			}
		}
		
		for(int i = 0 ; i< n ; i++)
		{
			for(int j = 0 ; j< n ; j++)
			{
				if(grid[i][j] == '1')
				{
//					cout<<"-------\n";
					count++;	
					dfs(n,i,j);
				}
			}
		}
		cout<<count<<endl;
		T--;
	}
}
