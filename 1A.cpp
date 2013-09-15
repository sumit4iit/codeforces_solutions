#include<iostream>
using namespace std;

int main()
{
	long long int m,n,t;
	cin>>m>>n>>t;
	long long int c1,c2;
	if(m%t!=0)
	c1 = m/t+1;
	else
	c1 = m/t;
	if(n%t!=0)
	c2 =n/t+1;
	else
	c2 = n/t;
	
	cout<<c1*c2;
}
