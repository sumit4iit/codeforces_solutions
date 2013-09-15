#include<iostream>
#include<algorithm>
using namespace std;

struct book
{
	int t;
	int w;
	double r;
};
bool cmp(book b, book a)
{
	if(a.r < b.r)
		return true;	
	else
		return false;
}

int main()
{
	book a[100];
	int n,t,w;
	cin>>n;
	
	for(int i=0; i< n ; i++)
	{
		cin>>t>>w;
		(a[i]).t = t;
		(a[i]).w = w;		
		double ratio =(double) (a[i]).w/ (a[i]).t;
		(a[i]).r = ratio;	
	}

	sort(a,a+n,cmp);
	//sorted	
	int sum = 0,avail = 0;
	for(int i=0; i<n;)
	{
		if(a[n-1].w > avail)
		{
			sum = sum + a[i].t;
			avail = avail + a[i].t;
			i++;
		}
		else
		{
			avail = avail - (a[n-1]).w;
			n--;
		}		
	}
	
	cout<<sum;
	
	
}
