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
int hash[26] = {0}; 

int main()
{
	string a;
	int count =0;
	cin>>a;
	for(int i=0;  a[i] != NULL ; i++)
	{
		hash[a[i]- 'a']+=1;
	}
	for(int i=0 ; i< 26 ; i++)
	{
		if(hash[i]%2==1)
		count++;		
	}
		if(count == 0 )
		{
			cout<<"First\n";
			return 0;
		}
		
		if(count%2 == 1)
		cout<<"First\n";
		else
		cout<<"Second\n";

	return 0;
}
