#include<iostream>
using namespace std;

int main()
{
	char a[4][4];
	for(int i=0 ; i< 4; i++)
	for(int j =0 ; j < 4 ;j++)
	cin>>a[i][j];

	for(int i=0 ; i< 3; i++)
	{
		
		for(int j =0 ; j < 3 ; j++)
		{
			int cnt =0,wcnt = 0 ;
			if(a[i][j] == '#')
			cnt++;
			if(a[i+1][j] == '#')
				cnt++;
			if(a[i][j+1] == '#')
				cnt++;
			if(a[i+1][j+1] == '#')
				cnt++;
			
			if(a[i][j] == '.')
				wcnt++;
			if(a[i+1][j] == '.')
				wcnt++;
			if(a[i][j+1] == '.')
				wcnt++;
			if(a[i+1][j+1] == '.')
				wcnt++;

			if(cnt>=3)
			{
				cout<<"YES";
				return 0;
			}			
			if(wcnt>=3)
			{
				cout<<"YES";
				return 0;
			}			
//			cout<<cnt; 
			
		}
//		cout<<endl;
	}
	cout<<"NO";
	
	
	return 0;	
}
