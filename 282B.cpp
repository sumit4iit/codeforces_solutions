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
	long long n;
	cin >> n;
	int diff = 0,a,b;
	
//	int a1[1000009], b[1000009];
	for(int i=0 ; i< n ; i++)
	{
//		cin>>a[i]>>b[i];
		cin>>a>>b;
		if(diff+a <= 500)
		{
			diff = diff + a;
			cout<<"A";
		}
		else if(diff - b >= -500)
		{
			diff = diff - b;
			cout<<"G";
		}
		else 
			cout<<"-1";
	}
	return 0;
}
