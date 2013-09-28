#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;


struct guess{
	string str;
	string scr;
};

// compare two guesses
int compr_guess(guess g1, guess g2)
{
	return g1.str > g2.str;
}

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n,k,q;
		cin>>n>>k>>q;
		
		map<int,set<int> > data;
		
		set<int> temp;
		
		for(int i=0 ; i<= n ; i++)
		{
			temp.insert(i);
		}
		
		for(int i=0 ; i<k ; i++)
		{
			data[i] = set<int>(temp);
		}
		
		guess g[q];
		
		// read the input		
		for(int i=0 ; i< q; i++)
		{
			string temp;
			cin>>temp;
			int t;
			cin>>t;
			g[i].str =temp;
			g[i].scr = t;
			if(t == 0)
			{
				for(int j=0 ; j< k ; j++)
				{
					data[j].erase(g[i].str[j]);
				}
			}
			else if(t == k)
			{
				for(int j = 0 ; j< k ; j++)
				{
					
				}
			}
			
		}
		
		// if none of the charactors match and if all of them match.
	 	
	 	
		
		
		
		
		t--;
	}
	
	return 0;
}

