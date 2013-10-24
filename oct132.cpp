#include<iostream>
#include<math.h>
using namespace std;

bool chkLucky(long long N_)
{
	long long N = N_;
	while(N)
	{
		if(N%10 == 4 || N%10 == 7)
		{
//			cout<<"is lucky :"<<N_<<endl;
			return true;
		}
		N= N/10;
	}
	return false;
}

int main()
{
	long long int T,N;
	cin>>T;
	for(int j=0 ; j< T ; j++)
	{
		cin>>N;
		int count = 0;
		int i = 1;
		for(i=1 ; i*i <= N ; i++)
		{
			if(N%i == 0)
			{
				if(chkLucky(i))
				{
					count++;
				}				
				if(chkLucky(N/i))
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
