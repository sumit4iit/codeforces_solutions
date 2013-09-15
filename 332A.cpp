#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	string s;
	int count = 0;	
	cin>>s;
	for(int i= 1 ; n*i < strlen(&s[0]); i++)
	{
		if(s[n*i-1]== s[n*i-2]&& s[n*i-2] == s[n*i-3] )
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
