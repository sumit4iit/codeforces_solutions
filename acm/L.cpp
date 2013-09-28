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
#define ull unsigned long long
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int dp[65] = {0};

int initialize_dp()
{
	dp[1] = 0;
	for(int i=2 ; i< 65; i++)
	{
		dp[i] = 1 + dp[__builtin_popcount(i)];
	}
	return 0;
}

int main()
{
	initialize_dp();
	for(int i=0 ; i< 65 ; i++)
	{
		cout<<dp[i]<<endl;
	}
		
	return 0;
}

