#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count =0;
	for(int i=0 ; s[i]!= NULL; i++)
	{
		if(s[i]=='H')
		count++;
	}
	if(count%2 == 0)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}
