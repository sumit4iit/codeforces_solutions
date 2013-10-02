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
	bool h;
	node* pre;
	int ind;
	node* next;
	ll p;
	int deg;
	node()
	{
		ind = 0;
		next = NULL;
		pre = NULL;
		h = false;
		p = 1;
		deg = 0;
	}
};

|
int main()
{
	int n;
	node a[n];
	for(int i= 0 ; i< n ; i++)
	{
		
	}
}

