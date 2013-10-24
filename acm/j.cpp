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
	char brd[11][11];
	char move[11][11];
	char ans[11][11];
	int n ;
	cin>>n;
	char temp;
	bool touched = false;
	for(int i=0 ; i< n ; i++)
	{
		for(int j = 0 ; j< n ; j++)
		{
			cin>>temp;
			if(temp == '.')
			brd[i][j] = 0; 
			else if(temp == '*')
			brd[i][j] = 1;
		}
	}
	// constructing bord
/*	for(int i = 0 ; i< n ; i++)
	{
		for(int j = 0 ; j< n ; j++)
		{
			cout<<(int)brd[i][j];
		}
		cout<<endl;
	}
*/	
	
	for(int i = 0; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin>>temp;
			if(temp == 'x')
			{
				if(brd[i][j] != 1)
				{
					ans[i][j] = 
					((i-1 >= 0) ? 			brd[i-1][j] : 0) +
								((j-1 >= 0 && i-1 >= 0) ? 	brd[i-1][j-1] : 0) +
								((j+1 < n && i-1 >= 0) ? 	brd[i-1][j+1] : 0 )+
								((j-1 >= 0) ? 			brd[i][j-1] : 0 )+
								((j+1 < n) ? 			brd[i][j+1] : 0 )+
								((i+1 < n) ? 			brd[i+1][j] : 0 )+
								((i+1 < n && j+1 < n) ? 	brd[i+1][j+1] : 0 )+
								((i+1 < n && j-1 >= 0) ? 	brd[i+1][j-1] : 0);				
				//				cout<<(int)ans[i][j];
				}
				if(brd[i][j] == 1)
				{
					touched = true;
					ans[i][j] = '*';
				}
			}
			else
			{
				ans[i][j] = '.';
			}
		}
//		cout<<endl;
	}
	
	for(int i=0; i< n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(brd[i][j] == 1 && touched)
			{
				cout<<'*';
			}
			else if(ans[i][j]==0 || ans[i][j] == 1 || ans[i][j] == 2 || ans[i][j] == 3 || ans[i][j] == 4 || ans[i][j] == 5 || ans[i][j] == 6 || ans[i][j] == 7 || ans[i][j] == 8)
			{
				cout<<(int) ans[i][j];
			}
			else
			{
				cout<<'.';
			}
			
		}
		cout<<endl;
	}

	
	return 0;
}

