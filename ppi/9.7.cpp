#include<iostream>
using namespace std;

int get_pre(int *a, int x)
{
	if(x==0)
	{
		return 1;
	}
	for(int i = X-1; i>=0 ; i--)
	{
		if(a[i]<a[X])
		{
			return dp[i]+1;
		}
	}
	return 1;
}

int main()
{
	int a[] = {1,2,0,7,4,9,2,3,4,5,6,11};
	int size = (sizeof(a)/sizea[0]);
	int dp[size]={0};
	int max_till_now = 0;
	for(int i=0; i < size ; i++)
	{
		dp[i] = get_pre(a,i);
		if(dp[i]>max_till_now)
		{
			max_till_now = dp[i];
		}
	} 
	cout<<max_till_now;
}
