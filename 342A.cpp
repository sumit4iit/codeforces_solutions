#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define For(i,n) for(int i=0 ; i<n ; i++)
using namespace std;

int main()
{
	int data[8] = {0};
	int pat[3] = {0};
	int n = 0;
	cin>>n;
	int t;
	int count = 0;
	For(i,n)
	{
		cin>>t;
		if(t==5 || t == 7)
		{
			cout<<-1; return 0;
		}
		data[t]++;
		count++;
	}
	while(data[1]--)
	{
		if(data[2]-- > 0)
		{
			if(data[4]-- > 0)
			{
				pat[0]++;
			}
			else if(data[6]-- > 0)
			{
				pat[1]++;
			}
			else
			{
				cout<<"-1";return 0;
			}
		}
		else if(data[3]-- > 0)
		{
			if(data[6]-- > 0)
			{
				pat[2]++;
			}
			else
			{
				cout<<-1;return 0;
			}
		}
		else
		{
			cout<<"-1"; return 0;
		}
	}
	
	if((pat[0]+pat[1]+pat[2])*3 == count)
	{
		For(i,3)
		{
			while(pat[i]-- > 0)
			{
				if(i==0)
				{
					cout<<1<<" "<<2<<" "<<4<<endl;
				}
				else if(i == 1)
				{
					cout<<1<<" "<<2<<" "<<6<<endl;
				}
				else
				{
					cout<<1<<" "<<3<<" "<<6<<endl;
				}
			}
		}
	}
	else
	{
		cout<<"-1";
		return 0;
	}
	return 0;
}
