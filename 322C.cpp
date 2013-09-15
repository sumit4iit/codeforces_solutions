#include<iostream>
#include<string>
using namespace std;


int main()
{
	long long x1,y1;
	cin>>x1>>y1;
	
	string s;
	cin>>s;
	
	long long x=0, y=0;
	
	for(int i=0; i< s.length(); i++)
	{
		if(s[i] == 'U')
		{
			y = y+1;
		}
		else if(s[i] == 'D')
		{
			y = y-1;
		}
		else if(s[i] == 'L')
		{
			x = x-1;
		}
		else
 		{
			x = x+1;
		}
	}
	
	long long vecX = x, vecY =y;
	x = 0;
	y = 0;
	
	if(vecX!=0 && vecY!=0 && (x1-x)%vecX == 0 && (y1-y)%vecY ==0 && (x1-x)/vecX == (y1-y)/vecY  && (x1-x)/vecX > 0)
	{
		cout<<"Yes\n";
		return 0;
	}
	else if(vecY != 0 && vecX == 0 && x1-x== 0 && (y1-y)%vecY == 0 && (y1-y)/vecY>0)
	{
		cout<<"Yes\n";
		return 0;
	}
	else if(vecX!= 0 && vecY==0 && y1-y==0 && (x1-x)%vecX == 0 && (x1-x)/vecX > 0)
	{
		cout<<"Yes\n";
		return 0;
	}
	else if(y1 - y ==0 && x1-x == 0)
	{
		cout<<"Yes\n";
		return 0;				
	}

	for(int i=0; i< s.length(); i++)
	{
		if(s[i] == 'U')
		{
			y = y+1;
		//	cout<<"1";
			if(vecX!=0 && vecY!=0 && (x1-x)%vecX == 0 && (y1-y)%vecY ==0 && (x1-x)/vecX == (y1-y)/vecY  && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecY != 0 && vecX == 0 && x1-x== 0 && (y1-y)%vecY == 0 && (y1-y)/vecY>0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecX!= 0 && vecY==0 && y1-y==0 && (x1-x)%vecX == 0 && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(y1 - y ==0 && x1-x == 0)
			{
				cout<<"Yes\n";
				return 0;				
			}
		}
		else if(s[i] == 'D')
		{
			y = y-1;
		//	cout<<"2";

	if(vecX!=0 && vecY!=0 && (x1-x)%vecX == 0 && (y1-y)%vecY ==0 && (x1-x)/vecX == (y1-y)/vecY  && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecY != 0 && vecX == 0 && x1-x== 0 && (y1-y)%vecY == 0 && (y1-y)/vecY>0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecX!= 0 && vecY==0 && y1-y==0 && (x1-x)%vecX == 0 && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(y1 - y ==0 && x1-x == 0)
			{
				cout<<"Yes\n";
				return 0;				
			}
		}
		else if(s[i] == 'L')
		{
			x = x-1;
		//	cout<<"3";

	if(vecX!=0 && vecY!=0 && (x1-x)%vecX == 0 && (y1-y)%vecY ==0 && (x1-x)/vecX == (y1-y)/vecY  && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecY != 0 && vecX == 0 && x1-x== 0 && (y1-y)%vecY == 0 && (y1-y)/vecY>0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecX!= 0 && vecY==0 && y1-y==0 && (x1-x)%vecX == 0 && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(y1 - y ==0 && x1-x == 0)
			{
				cout<<"Yes\n";
				return 0;				
			}
		}
		else
 		{
			x = x+1;
//			cout<<"4";

	if(vecX!=0 && vecY!=0 && (x1-x)%vecX == 0 && (y1-y)%vecY ==0 && (x1-x)/vecX == (y1-y)/vecY  && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecY != 0 && vecX == 0 && x1-x== 0 && (y1-y)%vecY == 0 && (y1-y)/vecY>0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(vecX!= 0 && vecY==0 && y1-y==0 && (x1-x)%vecX == 0 && (x1-x)/vecX > 0)
			{
				cout<<"Yes\n";
				return 0;
			}
			else if(y1 - y ==0 && x1-x == 0)
			{
				cout<<"Yes\n";
				return 0;				
			}
		}
	}
	
	
	cout<<"No\n";
	return 0;
	
	
}
