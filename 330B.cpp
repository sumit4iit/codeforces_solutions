#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<stack>
#include<queue>
#include<list>

using namespace std;
int main()
{
	int m, n ;
	
	// A is indexed from 1.
	int a[1005] = {0};
	
	cin>>n>>m;
	int l,k;
	for(int i=0; i<m; i++)
	{
		cin>>l>>k;
		a[l]++;
		a[k]++;
	}
	int found = 0;
	for(int i=1; i<= n ; i++)
	{
		if(a[i] == 0)
		{
			found = i;
			break;
		}
	}
	cout<<n -1<<"\n";
	for(int i=1; i<=n ; i++)
	{
		if(i!=found)
		cout<<found<<" " <<i<<"\n"; 
	}
	return 0;
}
	
