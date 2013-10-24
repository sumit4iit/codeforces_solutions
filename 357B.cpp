#include<iostream>
#include<map>
using namespace std;
#define FI(a) color.find(a)
#define EN color.end()
int main()
{
	int n,m,a,b,c;
	map<int,int> color;
	cin>>n>>m;
	for(int i=0 ; i< m; i++)
	{
		int col[4];

		for(int i = 0 ; i< 4 ; i++)
		col[i]  = 1;

		int ind = 1;
		cin>>a>>b>>c;
		if(FI(a) != EN)
		{
			col[color[a]] = -1; 
			while(col[ind] == -1)
			{
				ind++;
			}
			color[b] = ind++;
			while(col[ind]== -1)
			{
				ind++;
			}
			color[c] = ind;
			
		}
		else 		if(FI(b) != EN)
		{
			col[color[b]] = -1; 
			while(col[ind] == -1)
			{
				ind++;
			}
			color[a] = ind++;
			while(col[ind]== -1)
			{
				ind++;
			}
			color[c] = ind;
		}
		else		if(FI(c) != EN)
		{
			col[color[c]] = -1; 
			while(col[ind] == -1)
			{
				ind++;
			}
			color[a] = ind++;
			while(col[ind]== -1)
			{
				ind++;
			}
			color[b] = ind;
		}
		else
		{
			color[a] = 1;
			color[b] = 2;
			color[c] = 3;
		}
	}
	
	for(int i=1; i<=n ; i++)
	{
		cout<<color[i]<<" ";
	}
	
}
