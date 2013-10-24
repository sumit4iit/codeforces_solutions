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

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	vector<int> m;
	int temp;
	char temp2;
	for(int i=0 ; i< n ; i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0 ; i< n ; i++)
	{
		cin>>temp2;
		if(temp2 == '1')
		m.push_back(1);
		else
		m.push_back(0);
	}
	ll cur_max  = 0 , max_max = 0, pre_max = 0;
	int pre = 0;
	for(int i=0 ; i< n ; i++)
	{
		if(a[i] < max_max && m[i] == 1)
		{
			m[i] = 0;
			cur_max = max_max;
		}
		max_max += a[i];
		if(m[i] == 1)
		{
			cur_max += a[i];
		}
	}
	cout<<cur_max;
	return 0;
}

