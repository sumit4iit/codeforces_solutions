#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	set<int> x; 
	set<int> y;
	int px[8], py[8];
	for(int i=0; i< 8 ; i++)
	{
		cin>>px[i]>>py[i];
		x.insert(px[i]);
		y.insert(py[i]);
	}
	if(x.size() != 3 || y.size() != 3)
	{
		cout<<"ugly";
		return 0;
	}
	int i=0;
	int xmid = 0, ymid = 0;
	tr(x,it)
	{
		if(i == 1)
		{
			xmid = *it;
			i = 0;
			break;
		}
		i++;
	}
	tr(y,it)
	{
		if(i == 1)
		{
			ymid = *it;
			i = 0;
			break;
		}
		i++;
	}
	for(int i=0; i< 8; i++)
	{
		if(px[i] == xmid && py[i] == ymid)
		{
			cout<<"ugly";
			return 0;
		}
	}
	sort(px, px+8);
	sort(py, py+8);
	if(px[0] == px[1] && px[1] == px[2] && px[2]!= px[3] && px[3] == px[4] && px[4]!= px[5] && px[5]==px[6]  && px[6]==px[7]
	&& py[0] == py[1] && py[1] == py[2] && py[2]!= py[3] && py[3] == py[4] && py[4]!= py[5] && py[5]==py[6]  && py[6]==py[7] )	
	{
		cout<<"respectable";
		return 0;
	}
	else
	{
		cout<<"ugly";
		return 0;
	}
	cout<<"respectable";
	return 0;
}
