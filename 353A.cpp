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

int main()
{
	int n;
	cin>>n;
	int a,b;
	int esum = 0, osum =0;
	bool flag = false;
	for(int i=0 ; i< n ; i++)
	{
		cin>>a>>b;
		if(a+b % 2 == 1)
		flag = true;
		esum+=a;
		osum+=b;
	}
	
	if(esum%2==1 && osum%2==1 && flag)
	cout<<1;
	else if(esum%2 == 0 && osum%2 == 0)
	cout<<0;
	else
	cout<<-1;
	
	return 0;
}

