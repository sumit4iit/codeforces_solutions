#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int n,m,k,t,t1;
struct node
{
	int add;
};
node t2;
vector<vector<node> > graph;
vector<bool> vis;
vector<int> res;
int dfs(int ind)
{
	int expr;
	for(int i =0 ; i< graph[ind].size(); i++)
	{
		expr = graph[ind][i].add;
		if(vis[expr] == false)
		{
			vis[expr] = true;
			dfs(graph[ind][i].add);
		}
	}	
	
}

int main()
{
//	t2.vis= false;
	cin>>n>>m>>k;
	graph.resize(n+1);
	vis.resize(n+1);
	for(int i=0; i<m; i++)
	{
		cin>>t>>t1;
		t2.add = t1;
		graph[t].push_back(t2);
		t2.add = t;
		graph[t1].push_back(t2);
	}
	
	vis[1] = true;
	dfs(1);
	return 0;
}
