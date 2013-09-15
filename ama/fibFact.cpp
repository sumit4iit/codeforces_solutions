/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<iostream>
#include<stack>
#include<set>
#include<map>
#include<vector>
using namespace std;

#define ull unsigned long long

vector<ull> fib;
set<ull int> factors;
// initialize

ull gcd(ull x, ull y)
{
	while(x!=y)
	{
		if(x>y)
		x-=y;
		else 
		y-=x;
	}
	return x;
}

void initFib()
{
	ull i =1;
	while(fib[i]<(ull)~0)
	{
		i++;
		fib[i] = fib[i-1] + fib[i-2];
	}
}

void getFactors(ull x)
{
	ull int i=2;
	while(i<=x)
	{
		if(x%i ==0)
		factors.insert(i);
		while(x%i == 0)
		{
			x/=i;
		}
		i++;
	}
}
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)

bool test(ull f)
{
	tr(it,factors)
	{
		if(f % *it == 0)
		{
			return true;
		}
	}
	return false;
}

int main()
{
    fib.push_back(1);
    fib.push_back(1);
    initFib();
    int T;
    cin>>T;
    while(T>0)
    {
        ull k;
        cin>>k;
        factors.clear();
        getFactors(k);
        bool done = false;
        ull int i = 2;
		for(i=2; !done; i++)
        {
        	if(test(fib[i]))
        	{
        		cout<<fib[i]<<" "<<gcd(fib[i],k);
        		done = true;
        	}
        }
        
        T--;
    }
}
