#include<iostream>
#include<set>
#include<vector>
using namespace std;
#define ll long long
#define tr(con,it) for(typeof(con.begin()) it = con.begin(); it != con.end(); it++)

struct chef
{
	int index;
	ll health;
	set<int> inf;
	vector<int> dirty;
	ll X;
	int count;
	int sup;
	chef()
	{
		count = -1;
		X = 0;
		index = 0;
		health  = 0;
		sup = -1;
	}
};

int main()
{
	vector<chef> data(100005);
	int N,t1;
	ll t2;

	for(int i= 1; i<=Nl i++)
	{
		data[i].index = i;
		cin>>t2;
		data[i].health = t2;
		cin>>t1;
		data[i].sup = t1;
		data[t1].inf.insert(i);
	}
	
	int Q;
	int q,A,X;
	
	for(int i=0 ; i< Q ; i++)
	{
		cin>>q;
		if(q==1)
		{
			cin>>A>>X;
			data[A].X = data[A].X + X;
			// location of the dirty data;
			int dirty_loc = A;
			while(data[A].sup != -1)
			{
				A = data[A].sup;
				data[A].dirty.push_back(dirty_loc);
			}
		}
		else if(q == 2)
		{
			cin>>A;
			cout<<get_count(A)<<endl;
		}		
	}
}
