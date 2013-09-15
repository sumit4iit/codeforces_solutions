#include<iostream>

#include<cstdio>
using namespace std;

int main()
{
	int n,k ; 
	cin>>n>>k;
	if(n<k)
	{
		cout<<"-1";
		return 0;
	}
	else if(n>1 && k==1)
	{		
		cout<<"-1";
		return 0;
	}
	else if(n == 1 && k ==1)
	{
		printf("a");
	}
	bool turn = false;	
	for(int i=0 ; i < n+2-k; i++ )
	{
		cout<<(char) ('a' + i%2);
	}
	for(int i=0 ; i< k-2; i++)
	{
		cout<<(char) ('c' + i);
	}
	return 0;
}
