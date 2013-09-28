#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#define For(i,n) for(i=0 ; i< n ; i++)
#define ll long long

#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

#include<vector>
using namespace std;

class team
{
	public:
	int val;
	int diff;	
	int da;
	int db;
};

int compr(team a , team b)
{
	return a.diff > b.diff ;
}

int main()
{
	vector<team> data;
	int A,B,N,ta,tb,k;
	cin>>N>>A>>B;
	team temp;
	int i = 0;
	while(N!=0 && A!=0 && B!=0)
	{
		while(N)
		{
			cin>>k>>ta>>tb;
			temp.val = k;
			temp.da = ta;
			temp.db= tb;
			temp.diff = ta - tb;
			data.push_back(temp);
			N--;
		}
		
		// sort in increasing order of difference 
		sort(data.begin(),data.end(),compr);
		
		// print the sorted data
/*		tr(data,it)
		{
			cout<<it->diff<<endl;
		}*/
		
		// initialize sum
		int sum = 0;
		
		// business logic.
		for(int i=0 ; B > 0 && data[i].diff >= 0 ; i++)
		{
			if(data[i].val < B)
			{
				//cout<<"selecting b"<<data[i].db * data[i].val<<endl;
				sum += data[i].db * data[i].val;	// update sum
				B -= data[i].val;	// update B
				data[i].val = 0;	// update val
			}
			else
			{
				//cout<<"selecting b"<<data[i].db * B<<endl;
				sum += B  * data[i].db;
				data[i].val -= B;
				B = 0;
			}
		}
		
		for(int i= data.size() -1 ; i >= 0 && A > 0; i--)
		{
			if(data[i].val < A)
			{
				sum += data[i].da * data[i].val;
				A -= data[i].val;
				data[i].val = 0;
				
			}
			else
			{
				sum += data[i].da * A;
				data[i].val -= A;
				A = 0;
			}
		}
		
		for(int i = 0 ; i< data.size() && (A > 0 || B > 0) ; i++)
		{
			if(data[i].val > 0)
			{
				if(B > 0)
					sum+= data[i].db * data[i].val;
				else if(A > 0)
					sum+= data[i].da * data[i].val;
					
				data[i].val = 0;	
			}
		}
		cout<<sum << endl;
		cin>>N>>A>>B;
		
	}
	
	
	return 0;
}

