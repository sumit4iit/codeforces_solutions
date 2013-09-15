#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

merge()
{
		
}

mergeSort(int* a, int p, int r)
{
	if(p<r)
	{
		q = (p+r)/2;
		
		mergeSort(a, p, q);
		mergeSort(a,q+1,r);
		
		merge(a,p,q,r);
	}
	
}

int main()
{
	int  a[] = {0};
	
	mergeSort(a);
	
}
