#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#include<vector>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long longf
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

using namespace std;

int main()
{
	int n ; cin>>n; int temp;
	int r25 = 0 , r50 = 0 , r100 = 0;
	bool flag = true;
	for(int i=0 ; i< n && flag ; i++)
	{
		cin>>temp;
		if(temp == 25)
		{
			r25++;
		}
		else if(temp == 50)
		{
			if(r25 > 0)
			{
				r25--;
			}
			else
			{
				flag = false;
			}
			r50++;
		}
		else if(temp == 100)
		{
			if(r50 > 0 && r25 > 0)
			{
				r50--;
				r25--;
				r100++;
			}
			else if(r25 >= 3)
			{
				r25 -= 3;
				r100++;
			}
			else
			{
				flag = false;
			}
		}	
	}
	if(flag)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}

