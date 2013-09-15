#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	vector<long long int > a;
	long long int N,X;
	cin>>N;
	int temp;
	long long count =0;
	for(long long int i=0 ; i< N ; i++)
	{
		cin>>temp;
		if(temp < 0)
		{
			a.push_back(temp);			
			count -= temp;	
		}
	}
	cin>>X;

	if(X> count || a.size() < X)
	{
		cout<<count;
		return 0;
	}	
		
	sort(a.begin(),a.end(),greater<long long>());

	long long ans = X * (*(a.end() - X -1)) * -1;
		
	// cout<<ans<<endl;	
	long long count2 = 0;
	
	// do individual operations
	for(typeof(a.begin()) it = a.end()-X; it!= a.end() ; it++)
	{
		count2 -= *it;
		count2 += (*(a.end() - X -1));		
	}	
		
	ans += count2;
	
	cout << ans;
	
}
