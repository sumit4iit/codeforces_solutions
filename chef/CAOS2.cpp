#include<iostream>
using namespace std;

struct sieve
{
	bool stat;
	int pre;
	sieve()
	{
		stat = true;
		pre = 0;
	}
};

struct node
{
	int l,r,d,u;
	node()
	{
		l= 0 ; 
		r = 0; 
		d = 0 ; 
		u = 0;
	}
};

sieve primes[505];

void initialize()
{
	primes[1].stat = false;
	primes[0].stat = false;
	int precnt = 0;
	for(int i=2; i< sizeof(primes)/sizeof(primes[0]);  i++)
	{
		if(primes[i].stat)
		{
			precnt++;
			primes[i].pre = precnt;
			for(int j = 2; i*j < sizeof(primes)/sizeof(primes[0]) ; j++)
			{
				primes[i*j].stat  = false; 
			}
		}
		else
		primes[i].pre = precnt;
	}
}


int find_min(int a, int b , int c , int d)
{
	int min = a;
	if(min>b)
	min = b;
	if(min > c)
	min =c;
	if(min >d)
	min = d;
	
	return min;
}


int main()
{
	int T;
	cin>>T;	
	initialize();
	while(T>0)
	{
		int R,C;
		
		// Well time for DP
		char grid[500][500];
		
		unsigned int u[500][500] = {0};
		unsigned int d[500][500] = {0};
		unsigned int l[500][500] = {0};
		unsigned int r[500][500] = {0};
		
		cin>>R>>C;
		
		for(int i=0; i<R; i++)
		{
			for(int j = 0; j< C ; j++)
			{
				cin>>grid[i][j];
				
				if(i>0)
				{
					if(grid[i-1][j] == '^')
						u[i][j] = u[i-1][j]+1;
					else
						u[i][j] = 0;
 				}		
 				if(j > 0)
 				{	
 					if(grid[i][j-1] == '^')
						l[i][j] = l[i][j-1]+1;
					else
						l[i][j] = 0;
 				}
			}
		}
				
		for(int i=R-1 ; i>=0 ; i--)
		{
			for(int j=C-1 ; j>= 0 ; j--)
			{
				if(i<R-1)
				{
					if(grid[i+1][j] == '^')
						d[i][j] = d[i+1][j] +1;				
					else
						d[i][j] = 0;					
				}
				if(j < C-1)
				{
					if(grid[i][j+1] == '^')
						r[i][j] = r[i][j+1] +1;
					else 
						r[i][j] = 0;
				}	
			}
		}
		
		int count = 0;
		
		for(int i=0; i<R; i++)
		{
			for(int j = 0; j<C ; j++)
			{
				if(grid[i][j] == '^')
				{
				 	int min = find_min(r[i][j],l[i][j],d[i][j],u[i][j]);
					count = count + primes[min].pre;
				}
			}			
		    cout<<endl;
		}
		cout<<count<<endl;
		T--;
	}
}
