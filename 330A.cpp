#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	char temp;
	int row[11],col[11];
	int r,c;
	cin>>r>>c;
	for(int i=0; i<r; i++)
	{
		row[i] = c;
	}
	for(int i=0; i<c; i++)
	{
		col[i] = r;
	}
	for(int i = 0; i< r; i++)
	{
		for(int j = 0; j< c; j++)
		{
			cin>>temp;
			if(temp == 'S')
			{
				row[i] = 0;
				col[j] = 0;
			}
		}
	}
	int dec_count = 0;
	int sum = 0;
	
	for(int i=0 ; i< r; i++)
	{
		sum+=row[i];
		if(row[i]!= 0)
		{
			dec_count++;
		}
	}
	for(int i = 0; i< c; i++)
	{
		if(col[i]>0)
		sum += (col[i] - dec_count);
	}
	cout<<sum;
	return 0;
}

