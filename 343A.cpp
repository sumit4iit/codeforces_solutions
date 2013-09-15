#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define For(i,n) for(int i=0 ; i<n ; i++)
using namespace std;

int main()
{
	int n,m,s,f;
	cin>>n>>s>>m>>f;
	int cur = s;
	int i,l,r;
	while(cur!=f)
	{
		cin>>i>>l>>r;
		if(cur>f && cur>r || cur<f && cur != 1)
		{
			cout<<"L";
			cur--;
		}
		else if(cur<f && cur<r || cur >f && cur != n)
		{
			cout<<"R";
			cur++;
		}
		else
		{
			cout<<"X";
		}
	}
	return 0;
}
