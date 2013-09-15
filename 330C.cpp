#include<iostream>
using namespace std;



int main()
{
	int x[105];
	int y[105];
	char xy[100][100];
	int n;
	cin>>n;
	char t;
	for(int i=1; i<= n ; i++)
	{
		for(int j=1; j<= n ; j++)
		{
			cin>>xy[i][j];
		}
	}
	int i;
	for(i=1; i<= n; i++)
	{
		int j = 0;
		for(j = 1; j<=n ; j++) 
		{
			if(xy[i][j] =='.')
			x[i]=j;
			break;		
		} 
		if(j==n+1) break;			
	}
	if(i<n+1)
	{
		for(i = 1; i<= n; i++)
		{
			int j = 0; 
			for(int j = 1; j<= n ; j++)
			{
				if(xy[j][i] =='.')
				y[i] = j;
				break; 
			}
			if(j == n+1) break;
		}
		if(i < n+1)
		{
			cout<<"-1"; return 0;
		}
		else
		{
			for(int i = 1; i<= n ; i++)
			cout<<y[i]<<" " << i <<endl;  
		}
	}
	else
	{
		for(int i=1 ; i<= n ; i++)
		cout<<i<<" "<< x[i]<<endl;
	}
}
