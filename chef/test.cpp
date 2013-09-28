// bitset::any
#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

double srt(int a)
{
	double ans = 1;
	double start = 0;
	double end = a;
	while(1)
	{
		ans = (double) (start+end)/2;
		if(abs(a - ans*ans) < .0000000000001)
		{
			return ans;
		}
		else if(ans* ans > a )
		{
			end = ans;
			cout<<ans<<endl;
		}
		else
		{
			start = ans;
			cout<<ans<<endl;
		}
	}
}

int main ()
{
	int n;
	cin>>n;
	if(n%2 == 0)
	cout<<2<<endl;
	while(n%2 == 0)
	{
		n = n/2;
	}
	
	for(int i=3; i*i< n ; i+=2)
	{
		if(n%i == 0)
		{
			cout<<i<<endl;
			while(n%i == 0)
				n = n/i;
		}
	}
	if(n>1)
	{
		cout<<n<<endl;
	}
}
