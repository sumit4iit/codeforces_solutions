#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int a[50];
	int n,k,t;
	cin>>n>>k;
	if(k>n)
	{
		cout<<"-1";
		return 0;
	}
	else if(n==k)
	{
		cout<<"0 0";
		return 0;
	}
	else
	{
		for(int i=0 ; i< n ; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[n-k]<<" "<<a[n-k];
	}
	
}
