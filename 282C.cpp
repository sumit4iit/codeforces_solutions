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
#include<string>
using namespace std;

int main()
{
	
	string a = "",b = "";
	cin>>a;
	cin>>b;
	int size_a = 0, size_b = 0;
	bool flag_a = true , flag_b =true;
	int i=0;
	while(a[i]!= NULL)
	{
		if(flag_a == true && a[i] != '0')
		flag_a = false;
		
		size_a++;i++;
	}
	i = 0;
	while(b[i]!= NULL)
	{
		if(flag_b == true && b[i] != '0')
		flag_b = false;
		
		size_b++; i++;
	}
	
	if(flag_a != flag_b || size_a != size_b)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	
		
		
	return 0;
}
