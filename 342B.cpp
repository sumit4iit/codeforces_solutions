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
	while(cur!=f && m>0 )
	{
		cin>>i>>l>>r;
		if(cur>f || cur>r && cur != 1)
		{
			cout<<"L";
			cur--;
		}
		else if(cur<r || cur >f && cur != n)
		{
			cout<<"R";
			cur++;
		}
		else
		{
			cout<<"X";
		}
		// cout<<cur<<endl;
		m--;
	}
	return 0;
}
