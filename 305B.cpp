#include<iostream>
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
#include<vector>
using namespace std;

int main()
{
	unsigned long long p,q;
	vector<unsigned long long> ans;
	cin>>p>>q;
	while(q>1)
	{
		 ans.push_back(p/q);
//		 cout<<p/q<<" ";
		 unsigned long long temp = q;
		 q = p%q;
		 p = temp;
	}
	if(q!=0)
	ans.push_back(p);
	unsigned long long n;
	cin>>n;
	
	bool flag = true;
	
	if(n - ans.size() == 1 || ans.size() == n)
	{
		unsigned long long int temp;
		if(ans.size() == n)
		{
			for(int i=0; i< n ; i++)
			{
				cin>>temp;
				if(temp!=ans[i])
				{
				//	cout<<ans[i]<<" "<<temp;
					cout<<"NO";
					return 0;
				}
			}
			cout<<"YES";
			return 0;
		}
		else
		{
			for(int i=0 ; i< n-2; i++)
			{
				cin>>temp;
				if(temp!=ans[i])
				{
					cout<<"NO";
					return 0;
				}
			}
			cin>>temp;
			if(temp+1 != ans[n-2])
			{
				cout<<"NO";
				return 0;				
			}
			cin>>temp;
			if(temp!=1)
			{
				cout<<"NO";
				return 0;
			}
			cout<<"YES";
			return 0;
		}
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

