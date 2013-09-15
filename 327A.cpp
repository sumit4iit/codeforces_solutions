#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp;
	
	int count1 = 0;
	int countCurrentChange = 0;
	int maxChange = 0;
	
	for(int i = 0 ;i< n ; i++)
	{
		cin>>temp;
		if(temp == 1)
		{
			count1++;
			countCurrentChange--;			
		}
		else
		{	
			if(countCurrentChange < 0)
			{
				countCurrentChange = 0;
			}
			countCurrentChange++;
			if(countCurrentChange > maxChange)
			{
				maxChange = countCurrentChange;
			}
		}	
	}
	if(count1 == n)
	{
		cout<<n -1;
	}
	else
	cout<< count1+maxChange;
	return 0;
}


