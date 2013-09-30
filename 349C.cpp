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
#define ull unsigned long long
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<ll> data;
	ll max = 0,temp;
	for(int i=0 ; i< n ; i++)
	{
		cin>>temp;
		
		if(temp>max)
			max = temp;
		
		data.push_back(temp);
	}
	ll diff = 0;

	tr(data,it)
	{
		diff += max - *it;
	}

	ll nog = max;

	if(diff - nog >= 0)
	{
		cout<<nog;
		return 0;
	}
	
	ll curr_diff = diff - nog;
	
	curr_diff = abs(curr_diff);
	nog += ceil((float)curr_diff/(n-1));
/*	while(curr_diff<0)
	{
		curr_diff += (n-1);
		nog++;
	}*/
	
	cout<<nog;	

	return 0;
}

