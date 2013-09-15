#include<vectors>
#include<iostream>
using namespace std;

bool pow_2(long long k)
{
	long long t = (k & (k-1));
	if(t == 0)
	{
		return true;
	}
	return false;
}

int main()
{
	long long n ;
	cin>>n;
	vector<int> num;
	num.resize(n);
	for (int i=0; i< n; i++ )
	{
		cin>>num[i];
	}
	for(int i =0; i< 31 ; i++)
	{
		
	}
	
}
