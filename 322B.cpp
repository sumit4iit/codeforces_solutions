#include<iostream>

using namespace std;

long long int count_(long long int *a, long long int x)
{
	long long int count = x;
	for(int i = 0 ; i<3; i++)
	{
		if((a[i] - x) / 3 > 0)
		count = count+(a[i] - x) /3 ;
	}
	return count;
}

int main()
{
	long long int a[3];
	
	
	for(int i=0; i< 3 ;i++)
	{
		cin>>a[i];
	}
	
	long long min = a[0];
	
	for(int i=0; i< 3 ;i++)
	{
	}

	long long int count = 0;
	
	long long int temp = count_(a,0);
	
	if(count_(a,1) > temp)
	temp = count_(a,1);
	
	if(count_(a,2)>temp)
	temp = count_(a,2); 
	
	cout<<temp;
	
}
