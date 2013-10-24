#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#include<vector>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long

#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

struct node
{
	int i;
	int j;
	node()
	{
		i = -1;
		j = -1;
	}
};

int main()
{
	int T,N,M;
	scanf("%d",&T);
	char a[11][11];
	vector<node> dp[11][11][11][11];
	while(T)
	{
		int max = 0;
		scanf("%d%d",&N,&M);
		for(int i = 0 ; i< N ; i++)
		{
			for(int j= 0; j< M ; j++)
			{
				cin>>a[i][j];
			}			
		}
		
		for(int i2=0 ; i2< N ; i2++)
		{
			for(int j2 = 0 ; j2< M ; j2++)
			{
				for(int i1 = 0 ; i1<N ; i1++)
				{
					for(int j1= 0 ; j1<M ; j1++)
					{
						
						if((i1!=i2 || j1!=j2) && a[i1][j1] == a[i2][j2])
						{
							node temp;
							temp.i = i1;
							temp.j = j1;
							(dp[i2][j2][i2][j2]).push_back(temp);
						}
					}
				}
			}
		}
		
//		cout<<(dp[0][0][0][0]).size()<<endl;
		
		for(int i1 = 0 ; i1 < N; i1++)
		{
			for(int j1 = 0; j1<M ; j1++)
			{
				for(int i2 = i1 ; i2< N ; i2++)
				{
					for(int j2 = j1; j2 < M ; j2++)
					{
						if((dp[i1][j1][i2][j2]).size() > 0 )
						{
							tr(dp[i1][j1][i2][j2],it)
							{
								bool flag = true;
								for(int k = 0; k <=j2-j1; k++ )
								{
									if(a[(it->i) + i2- i1 +1][it->j + k] != a[i2+1][k+j1])
									{
										flag = false;
										break;
									}
								}
								if(flag)
								{
									node temp;
									temp.i = it->i;
									temp.j = it->j;
									(dp[i1][j1][i2+1][j2]).push_back(temp);
								}
								flag = true;
								for(int k = 0; k<= i2 - i1; k++)
								{
									if(a[(it->i)+k][it->j + j2-j1 + 1] != a[i1+k][j2+1])
									{
										flag = false;
										break;
									}
								}
								if(flag)
								{
									node temp;
									temp.i = it->i;
									temp.j = it->j;
									(dp[i1][j1][i2][j2+1]).push_back(temp);
								}
							}
						}
					}
				}
			}
		}
		for(int i=0 ; i< N; i++)
		{
			for(int j = 0; j < M ; j++)
			{
				for(int i1= 0 ; i1< N ; i1++)
				{
					for(int j1= 0; j1<M ; j1++)
					{
						cout<<(dp[i][j][i1][j1]).size() <<" ";
						if((dp[i][j][i1][j1]).size() > 0)
						{
							if(max < (i1-i + 1) * (j1 - j +1))
							{
								max = (i1-i + 1) * (j1 - j +1);
							}
						}
						(dp[i][j][i1][j1]).clear();
					}
					cout<<endl;
				}
				cout<<"\t\t";
			}
			cout<<endl<<endl;
		}
		cout<<max<<endl;
		T--;
	}
	return 0;
}

