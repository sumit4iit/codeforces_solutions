#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i= 0 ; i< s.size() ; i++)
	{
		if(s[i] == '/')
		s[i] = ' ';
		
		cout<<s[i];
	}
	return 0;
}
