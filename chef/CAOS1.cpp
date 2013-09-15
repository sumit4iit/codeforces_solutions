#include<iostream>
using namespace std;

struct node
{
	int l,r,d,u;
	node()
	{
		l= 0 ; 
		r = 0; 
		d = 0 ; 
		u = 0;
	}
};

int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int R,C;
		char grid[55][55];
		node dp[55][55];
		cin>>R>>C;
		for(int i=0; i<R; i++)
		{
			for(int j = 0; j< C ; j++)
			{
				cin>>grid[i][j];
				if(i>0 && j>0 && grid[i][j] == '^')
				{
					dp[i][j].l = dp[i][j-1].l+1;
					dp[i][j].u = dp[i-1][j].u+1;
 				}
 				if( i == 0)
 				{
 					dp[i][j].l =0;
 				}
 				if( j == 0)
 				{
 					dp[i][j].u =0;
 				}
 				if(grid[i][j] == '#')
 				{
 					dp[i][j].l = -1;
 					dp[i][j].r = -1;
 					dp[i][j].u = -1;
 					dp[i][j].d = -1;
 					
 				}
 				
			}
		}
		
		for(int i=R-1 ; i>=0 ; i--)
		{
			for(int j=C-1 ; j>= 0 ; j--)
			{
				if(i<R-1 && j<C-1 && grid[i][j] == '^' )
				{
					dp[i][j].r = dp[i][j+1].r +1;
					dp[i][j].d = dp[i+1][j].d +1;				
				}
				if(i == R-1)
				{
					dp[i][j].r = 0; 
				}
				if(j == C-1)
				{
					dp[i][j].d == 0;
				}
				
			}
		}
		
		int count = 0;
		
		for(int i=0; i<R; i++)
		{
			for(int j = 0; j<C ; j++)
			{
				if(dp[i][j].r>1 && dp[i][j].l > 1 &&dp[i][j].u >1 && dp[i][j].d > 1  )
				{
					count++;
				}
			}
		}
		
		cout<<count<<endl;
		T--;
	}
	
}
