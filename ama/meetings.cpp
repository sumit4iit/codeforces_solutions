/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<iostream>
#include<stack>
#include<set>
#include<map>
#include<vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)

struct parent
{
	parent* pi;
	int start;
	int end;
	parent()
	{
		pi = NULL;
	}
};

struct time
{
	public:
		int hh;
		int mm;
	    parent* pi;
	time()
	{
		hh = 0;
		mm = 0;
		pi= NULL;
	}
};


int main()
{
        time timeline[24*60+2];

        int M,K;
	scanf("%d%d",&M,&K);
	int _start, _end;
	while(M>0)
	{
		int a,b;
		
		cin>>a>>b;
		_start = 60*a+b;
		cin>>a>>b;
		_end = 60*a+b;
		parent* node = new parent();
		node->start = _start;
		node->end = _end;
		for(int i = _start ; i< _end ; i++ )
		{
			if(timeline[i].pi == NULL)
			{
				timeline[i].pi = node;
			}
			else 
			{
				if(timeline[i].pi->end < _end)
				{
					timeline[i].pi->end = _end; 
				}
				break;
			}
		}
		 
		M--;
	}
	
	timeline[24*60].pi = new parent();
	timeline[24*60].pi->start = 24*60;
	timeline[24*60].pi->end = 24*61;
	
	int count = -1;
	int cur_start = 0;
	for(int i = 0 ; i<= 24*60;)
	{
		if(timeline[i].pi == NULL)
		{
			count++;
		//	cout<<i<<":"<<count<<endl;
			i++;
		}
		else
		{
			if(count>=K)
			{
				// cout<<0<<cur_start/60<<" " <<0<<cur_start%60<<" "<<i/60<<" "<<i%60<<endl;
				if((cur_start/60)%24 < 10)
					cout<<0;
				cout<<(cur_start/60)%24<<" ";

				if(cur_start%60 < 10)
					cout<<0;
				cout<<cur_start%60<<" ";

				if((i/60 )%24< 10)
					cout<<0;
				cout<<(i/60)%24<<" ";

				if((i%60)<10)
					cout<<0;
				cout<<i%60<<" ";
				
				cout<<endl;
			}
			cur_start = timeline[i].pi->end;
			count = -1;
			i = cur_start;
		}
	}

}
