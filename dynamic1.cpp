#include<iostream>
using namespace std;

int main()
{
	int a[] = {3,5,1};
	int b[12] ;
	for(int i=0 ; i<12; i++)
	{
		b[i] = 1000;
	}
	b[0] = 0;
	for(int i=1 ; i< 12 ; i++)
	{
		for(int j=0 ; j< 3; j++)
		{
			if(i-a[j] >= 0)
			{
				if(b[ i-a[j] ] + 1 < b[i])
				{
					b[i]= b[i-a[j]]+1;
				}
			}
		}
	}
	
	for(int i=0 ; i< 12; i++)
	{
		cout<<b[i]<<" ";
	}
	
	
	
	return 0;
}
