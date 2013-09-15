#include<iostream>

using namespace std;

int main()
{
	long long l, r;
	cin>>l>>r;
	long long diff = r -l;
	long long num = 0;
	long long br = 1;
	int i= 0;
	if(diff == 0)
	{
		cout<<0;
		return 0;
	}
//	cout<<diff<<endl;
	while(num <= diff)
	{
		num += br;
		br *= 2;
		num++;
		i++;
	}
	while(r >= br)
	{
 		if( (l>>i)^(r>>i)&(1LL) == 1LL  ) num+= br;
 		br *=2 ;
 		i++;
	}
	
	
}
