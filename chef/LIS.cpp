#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	
	int dp[100];
	
	int size = sizeof(a)/sizeof(a[0]);
	
	for(int i= 0 ;i< size; i++)
	{
		dp[i] = 1;
	}
	
	int max = 1;
	for(int i=0; i<size; i++)
	{
		for(int j = i ; j>=0 ; j--)
		{
			if(a[j] < a[i])
			{
				dp[i] = dp[j]+1;
				if(dp[j]>max)
					max = dp[j];
				break;
			}
		}
		cout<<dp[i]<<" ";
	}

	
}
