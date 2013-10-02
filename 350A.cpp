#include<iostream>
using namespace std;

struct parent 
{
	int start;
	int end;
	parent()
	{
		start = 0;
		end = 0;
	}
};

struct node
{
	public:
		parent* pi;
		node()
		{
			pi = NULL;
		}
};

int main()
{
	int n,k;
	cin>>n>>k;
	int h,m;
	
	node time[24*60];

	for(int i=0 ; i< n ; i++)
	{
		cin>>h>>m;
		int _start = 60*h+m;
		cin>>h>>m;
		int _end = 60*h+m;

		parent *p = new parent();
		
		p->start = _start;
		p->end = _end;

		for(int i = _start; i < _end ; )
		{
			if(time[i].pi == NULL)
			{
				time[i].pi = p;
				i++;
			}
			else
			{
				if(time[i].pi->end < _end)
				{
					time[i].pi->end = _end;
				}
				i = time[i].pi-> end;
			}
		}
	}
	
	int i=0 ;
	int _cur = 0;
	int count = 0;

	while(i<24*60)
	{
		if(time[i].pi == NULL )
		{
			count++;
			i++;
		}
		else if(time[i].pi != NULL)
		{
			if(count >= k)
			{
				if((_cur/60)%24 < 10)
					cout<<0;
				cout<<(_cur/60)%24<<" ";
				
				if((_cur%60)<10)
					cout<<0;
				cout<<(_cur%60)<<" ";
				
				if((i/60)%24 < 10)
					cout<<0;
				cout<<((i/60)%24) << " ";
				
				if((i%60) < 10 )
					cout<<0;
				cout<<i%60<<endl;
				
			}
			count = 0;
			_cur = time[i].pi->end;
			i = _cur;
		}
	}
	
//	cout<<count<<endl;
		
	if(count >= k)
	{
		if((_cur/60)%24 < 10)
			cout<<0;
		cout<<(_cur/60)%24<<" ";
		
		if((_cur%60)<10)
			cout<<0;
		cout<<(_cur%60)<<" ";
		
		if((i/60)%24 < 10)
			cout<<0;
		cout<<((i/60)%24) << " ";
		
		if((i%60) < 10 )
			cout<<0;
		cout<<i%60<<endl;	
	}
	count = 0;
	return 0;
}
