#include<iostream>
#include<vector>
#define ull unsigned long long
#define ll long long
using namespace std;
#define size 66
unsigned long long int dp[100];
// vector<unsigned long long > dp(100);
void initialize()
{
	dp[0] = 1;
	dp[1] = 1;
	for(ull i= 2; i<size; i++ )
	{
		if(i%2 == 1)
		dp[i] =i*(dp[i-1]/ (i - i/2));
		else
		dp[i] = 2*dp[i-1];
		// cout<<"i:\t"<<i<<"\tval\t"<<dp[i]<<endl; 
		//cout<<dp[i]<<endl;
	}
}


int search(ull x ,int start, int end)
{
	int mid = (start + end)/2;
	if(x>dp[mid]) 
	{
		return search(x, mid+1 , end);
	}
	else if(x<= dp[mid] && x > dp[mid-1])
	{
		return mid;
	}
	else if(x < dp[mid])
	{
		return search(x,start, mid);
	}
}

int main()
{
	initialize();
	ll int T;
	cin>>T;
	while(T>0)
	{
		ull temp;
		cin>>temp;
		cout<<search(temp,1,size)<<endl;		
		T--;
	}
	return 0;
}
