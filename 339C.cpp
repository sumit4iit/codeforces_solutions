#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<vector>
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
	int count =0;
	char hash[11];
	for(int i=1 ; i<=10; i++)
	{
		cin>>hash[i];

		if(hash[i]=='1')
		count++;
		
	}

	int m;
	cin>>m;

	
	if(count<2 && m!=count )
	{
		cout<<"NO\n";
		return 0;		
	}

	
	vector<int> out;
	
	int sumL = 0, sumR= 0;
	
	bool flag = false;
	
	int turn = 0;
	
	int pre =0 ;
	
	for(int j=0; j< m  && !flag; j++)
	{
		flag = true;
		for(int i=abs(sumL - sumR)+1 ; i<=10 ; i++)
		{
			if(i!= pre)
			{
				if(hash[i]!='0')
				{
					flag = false;
					if(turn%2 == 0)
					{
						sumL+=i;
						out.push_back(i);
					}
					else
					{
						sumR+=i;
						out.push_back(i);
					}
					turn++;
					pre = i;
					break;
				}
			}
		}
	}
	
		
	if(out.size()==m)
	{
		cout<< "YES\n"; 
		for(int i = 0 ; i< m ; i++)
		{
			cout<<out[i]<< " ";
		}
	}
	else
	{
		cout<<"NO\n";
	}
		
	return 0;
}

