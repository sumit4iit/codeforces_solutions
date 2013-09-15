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
	
	int n,cp = 0, cm = 0;
	scanf("%d",&n);
	char t;
	for(int i=0 ; i< 3*n ; i++)
	{
		cin>> t;
		if(t =='+')
			cp++;
		else if(t == '-')
			cm++;
	}
		cp = cp /2;
		cm = cm /2;
		cout<<cp - cm;
	return 0;
}
