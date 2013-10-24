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

struct node
{
	int deg;
	int ind;
	int color;
	vector<int> adj;
	node()
	{
		color = 0;
	}
};

map<int , node*> list;

void dfs(node* root)
{
	tr(root -> adj, it)
	{
		dfs(list[*it]);
		root->deg = 1;
	}
}

int main()
{
	int a,b;
	int c = 0;
	scanf("%d%d",&a,&b);
	while(a >= 0 && b >= 0)
	{
		c++;
		// input
		while(a > 0 && b > 0)
		{	
			if(list.find(a) == list.end())
			{
				node *temp = new node();
				temp->ind =a;
				temp->adj.push_back(b);
				list[a] = temp;
			}
			else
			{
				list[a]->adj.push_back(b);
			}
			scanf("%d%d",&a,&b);			
		}
		
		// find root
		bool flag = true;
		tr(list,it)
		{
			tr(it->second->adj, it1)
			{
				(list[*it1])->color++;
				if((list[*it1])->color > 1)
				{
					flag = false;
					break;
				}
			}
		}
		node* root;
		int root_count = 0;
		if(flag)
			tr(list,it)
			{
				if(it->second->color == 0)
				{
					root = list[it->second->ind]; 
					root_count++;
					if(root_count > 1)
					{
						flag = false;
						break;
					}
				}
			}
		if(flag)
		{
			
			dfs(root);
			tr(list,it)
			{
				if(it->second->deg == 0)
				{
					flag = false;
					break;
				}
			}
		}
		if(flag)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"Not"<<endl;
		}
		c++;
	}	
	return 0;
}

