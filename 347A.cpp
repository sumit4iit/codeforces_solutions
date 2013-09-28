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
	vector<int> data;
	int temp ;
	for(int i=0 ; i< n ; i++)
	{
		cin>>temp;
		data.push_back(temp);
	}
	sort(data.begin(),data.end());
	
	temp = data[0];
	data[0] = data[n-1];
	data[n-1] = temp;
		
	for(int i=0 ; i< n ; i++)
	{
		cout<<data[i]<<" ";
	}
	return 0;
}

