#include<iostream>
#include<string>
#include<set>

#define ll long long
#define il(i,a,b) for(i=a ; i<b ; i++ )
#define dl(i,a,b) for(i=a; i>b ; i-- )
#define lo(i,a) for(i=0; i<a ; i++ )

using namespace std;

struct p
{
	ll h;
};

int main()
{
	ll n;
	cin>>n;
	p stairs[n];
	int i;
	il(i,1,n+1)
	{
		cin>>stairs[i].h;
	}
	
	ll m;
	cin>>m;
	
	ll ht = 0;
	lo(i,m)
	{
		ll w, h;
		cin>>w;
		cin>>h;
		
		if(stairs[w].h > ht)
		{
			cout<< stairs[w].h <<endl;
			ht = stairs[w].h + h;			
		}
		else
		{
			cout<<ht<<endl;
			ht = ht+ h;
		}
/*		if(hb < w)
		{
			cout<<w<<endl;
			hb = w;
			while(h)
			{
				if(stairs[hb].h > h)
				{
					stairs[hb].h -= h;
					h =0;
				}
				else 
				{
					h = h -stairs[hb] ;
					hb++;					
				}				
			}		
		}
		else
		{
			
		}*/
	}
}

