#include<iostream>
using namespace std;

int partition(int *a, int p, int q)
{
	int x = a[p];
	int i=p+1;
	int j=q;
	while(i<=j)
	{
		while(a[i]<x && i<=q)
		{
			i++;
		}
		while(a[j]>=x && j>p)
		{
			j--;
		}
		if(i<j)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;	
		}
	}

	int temp = a[j];
	a[j] = a[p];
	a[p] = temp;
	
	return j;
}

void quicksort(int* a, int p, int r)
{
	if(p<r)
	{
		int q = partition(a, p, r);
		quicksort(a,p,q);
		quicksort(a,q+1,r);		
	}  
}

int main()
{
	int a[] = {0,1,1,1,1,1,1,2,1};
	quicksort(a, 0, sizeof(a)/sizeof(a[0]) -1);
	
	for(int i=0; i< sizeof(a)/sizeof(a[0]) ; i++)
	{
		cout<<a[i]<<" ";
	}
	cin>>a[0];
	return 0;
	
}
