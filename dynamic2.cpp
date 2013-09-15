#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10];
	int n;
	cin>>n;
	
	for(int i=0 ; i< n; i++)
	{
		cin>>a[i]; b[i] = 1;
	}
	int i= 1;
	
	while(i<n)
	{
		int j= i-1;
		while(a[i]<a[j] && j>=0)
		{
			j--;
		}

		if(j>=0)
			b[i] = b[j] +1;
		
		i++;		
	}
	
	for(int i=0 ; i< n; i++)
	cout<<b[i]<<" ";	
}
