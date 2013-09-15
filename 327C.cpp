#include<iostream>
#include<string>
using namespace std;

long long int fast_expo(long long int a, long long int b)
{
	if(b == 0 )
	return 1;
	
	long long t = fast_expo(a,b/2) % 1000000007;

	if(b%2 == 0)
	{
		return t*t % 1000000007;
	}
	else
	{
		return t*t*a % 1000000007;
	}
}

int main()
{
	string s;
	cin>>s;
	long long int count = 0;
	long long ans = 0;
	long long int k;
	long long int pre =1;
	long long pre_count = 0;
	cin>>k;
	for(int i=0 ; i<k*s.length() ; i++)
	{
		if(s[i%s.length()] == '0' || s[i%s.length()] == '5')
		{
			pre = ((fast_expo(2,count-pre_count)%1000000007) * (pre%1000000007))%1000000007;
			ans = (ans%1000000007 + pre%1000000007)%1000000007;
			pre_count = count;
		}
		count++;
	}
	
	cout<<ans;
	
	return 0;
}
