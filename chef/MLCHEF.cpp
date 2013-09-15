#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<limits.h>
using namespace std;

#define ll long long
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it != container.end() ; it++)

struct chef
{
	// index of the chef
	int index;
	// index of the superior
	ll sup;
	// set of inferiors
	set<int> inf;
	// health of the chef
	ll health;
	// poison 
	ll X;
	// count of old chefs
	ll old;
	// is dirty?
	bool dirty;
	// construct me
	chef()
	{
		index = 0;
		sup = 0;
		health = 0;
		X = 0;
		dirty = false;
		
	}
};

vector<chef> data(100005);

ll count(int A, ll poi)
{
	ll ans = 0;
	tr(it, data[A].inf)
	{
		if(data[*it].health > poi)
			ans++;		
		ans = ans + count(*it,poi+data[*it].X);
	}
	return ans;
}

ll get_poison(int x)
{
	if(x == 0)
	{
		return 0;
	}
	ll sum = 0;
	
	int supr = data[x].sup;
	
	while(supr != 0)
	{
		sum += data[supr].X;
		supr = data[supr].sup;
	}
	return sum+data[0].X;
}

int main()
{
	int N;
	cin>>N;
	ll H;
	int s;
	
	// read data.
	for(int i = 1; i<= N ; i++ )
	{
		cin>>H;
		cin>>s;
		data[i].health = H;
		data[i].sup = s;
		data[s].inf.insert(i);
	}
	
	int Q;
	cin>>Q;
	
	int q;
	for(int i=0 ; i< Q ; i++)
	{
		cin>>q;
		if(q==1)
		{
			int A;
			ll Poi;
			cin>>A;
			cin>>Poi;
			data[A].X = Poi; 
		}
		else
		{
			int A;
			cin>>A;
			cout<<count(A,data[A].X+get_poison(A));
			cout<<endl;
		}		
	}
}

