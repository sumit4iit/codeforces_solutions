#include<iostream>

using namespace std;

struct str
{
	int val;
	bool vis;
};
int main()
{
	int count = 0;
	int n;
	int s, t;
	int temp;
	cin>>n>>s>>t;
	str a[100005];
	for(int i= 1; i<= n; i++)
	{		
		cin>>temp;
		a[i].val = temp;	
		a[i].vis = false;
	}
	int i = s;
	while( i!=t)
	{
		if(a[i].vis== true)
		{
			cout<<"-1\n";//<<i<<endl;
			return 0;
		}
		count++;
		a[i].vis = true;
		i = a[i].val;		
	}
	cout<<count<<endl;
	
	
	 return 0;
}
