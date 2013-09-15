#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	//input
	cin>>a;
	
	//#..###
	int s[100009];
	s[0] = 0;
	for(int i=0 ; i< a.length(); i++)
	{
		s[i+1] = s[i] + (a[i] == a[i+1]);
	}
	int T;
	cin>>T;
	int st,e;
	while(T>0)
	{
		cin>>st>>e;
		cout<<s[e-1]-s[st-1]<<endl;
		T--;
	}
}
