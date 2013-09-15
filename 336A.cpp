#include<iostream>
using namespace std;

int main()
{
	long long a, b;
	cin>>a>>b;
	
	if(a>0 && b>0)
	{
		cout<< 0 << " " << a+b<< " " << a+b << " " << 0;  
	}
	else if(a < 0  && b > 0)
	{
		cout << a-b << " " << 0 << " " << 0 << " " << -1*(a-b);
	}
	else if(a < 0 && b <0)
	{
		cout << a+b << " " << 0 << " " << 0 <<" "<< a+b ;
	}
	else
	{
		cout << 0 << " " << b -a << " " << -1*(b-a) << " " << 0;
	}
	 
	return 0;
}
