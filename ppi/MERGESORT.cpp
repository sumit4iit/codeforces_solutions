#include<iostream>
using namespace std;

void merge(int a[], int p, int q, int r)
{
	//preprocess
	int n1 = q-p+1;
	int n2 = r-q;
	n1++;
	n2++;

	int lf[n1]; 
	int rt[n2];
	
	for(int i=0; i < n1-1; i++)
	{
		lf[i] = a[p+i];
	}
	for(int i=0; i< n2-1; i++)
	{
		rt[i] = a[q+1+i];
	}
	
	lf[n1]  = 10000;
	rt[n2]  = 10000;
	
	//merge 
	int i=0, j = 0;
	for(int k=p; k<=r; k++)
	{
		if(lf[i]<rt[j])
		{
			a[k] = lf[i];
			i++;
		}		
		else
		{
			a[k] = rt[j];
			j++;
		}	
	}
	
}
void merge_sort(int a[], int p, int r)
{
	if(p<r)
	{
		int q = (p+r)/2;
		merge_sort(a, p, q);
		merge_sort(a, q+1, r);
		merge(a,p,q,r);
	}
}

int main()
{
	int a[] = {9,3,4,2,5,1,6,4,5};
	merge_sort(a, 0,8);
	for(int i=0; i< 9; i++)
	{
		cout<<a[i];
	}
	cin>>a[0];
}
