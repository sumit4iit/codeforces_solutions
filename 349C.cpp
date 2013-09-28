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
	ll int n;
	vector<ll> data;
	cin>>n;
	ll temp;
	int max = 0;
	ull diff = 0;
	for(int i= 0 ;i< n ; i++) 
	{
		cin>>temp;
		data.push_back(temp);
		if(temp> max)
		{
			max = temp;
		}
	}

	bool flag = false;

	for(int i=0 ; i< n ; i++)
	{
		diff += max - data[i]; 
		if(diff >= max)
		{
			flag = true;
			break;
		}
	}
	
	if(flag)
	{
		cout<<max;
		return 0;
	}
	else
	{
		// max = 3;
		ull diff_2 = max-diff; // diff = 0; diff_2 = 3;
		ll empty = diff;  ll int i = 0; ll nog = max;		// empty = 0;
		while(empty + i*(n-1) < nog) 	
		{
			nog++;
			i++;
		}
		cout<<nog;
		return 0;
	}
	return 0;
}

