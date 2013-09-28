#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	bool swap = false;
	int count = 0;
	for(int i=0 ; i<n ; i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0 ; i<n ; i++)
	{
		if( i == a[i])
		{
			count++;
		}
		else
		{
			if( a[a[i]] == i  && !swap)
			{
				swap = true;
				count = count+2;
			}
		}
	}
	if(!swap && count<n)
	cout<<count+1;
	else
	cout<<count;
	return 0;
}

