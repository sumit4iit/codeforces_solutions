// test
#include<iostream>
#include<map>
using namespace std;

class node
{
	public:
		bool valid;
		int r;
		int pre;
		int val;
		node()
		{
			valid = true;
			r= 0;
			pre = -1;
		}
		int operator <(node a)
		{
			return val < a.val;
		}
};

int main()
{
	map<int,node*> data;
	int n;
	cin>>n;
//	node temp;
	int t;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>t;
		typeof(data.begin()) it = data.find(t);
		if( it != data.end())
		{
			if(it->second->valid)
			{
				if(it->second->r!=0)
				{
					if(it->second->r != i - it->second->pre)
					{
						it->second->valid = false;
//						cout<<"Making this invalid : "<<it->first<<" : i : "<<i<<": pre :"<<it->second->pre<<": with r : "<<it->second->r<<endl;
					}
					it->second->pre = i;
				}
				else
				{
					it->second->r = i - it->second->pre;
					it->second->pre = i;
				}
			}
		}
		else
		{
//			cout<<"adding node : " << t << " : pre : " << i<< endl; 
			data[t] =new node();
			data[t]->pre = i;
		}
	}
	int count = 0;
	for(typeof(data.begin()) it = data.begin() ; it!= data.end(); it++)
	{
//		cout<<"LOg: " <<it->first<<" :valid : "<<it->second->valid<<" :r : "<<it->second->r<<endl; 
		if(it->second->valid)
		count++;
	}
	cout<<count << endl;
	for(typeof(data.begin()) it = data.begin() ; it!= data.end(); it++)
	{
		if(it->second->valid)
		cout<<it->first<<" " << it->second->r <<endl;
	}
	return 0;
}
