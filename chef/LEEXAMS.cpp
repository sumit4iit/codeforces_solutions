#include<iostream>
#include<map>
#include<iomanip>
using namespace std;

map<int,bool> stat;

long double prob(int* A, int* B, int* p, int ind, int n)
{
	long double prob1  =0, prob2 = 0;
	if(ind >= n)
	{
		return 1;
	}
	if(!stat[A[ind]])
	{
		stat[A[ind]] = true;
		prob1 =  prob(A,B,p,ind+1, n);
		stat[A[ind]] = false;
	}
	if(!stat[B[ind]])
	{
		stat[B[ind]] = true;
		prob2 = prob(A,B,p,ind+1, n);
		stat[B[ind]] = false;
	}	
	if(stat[A[ind]] && stat[B[ind]])
	{
		return 0;
	}
	return ((long double) (p[ind]*prob1 + prob2 * (100 - p[ind])) / 100 );
}

int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int n;
		cin>>n;
		int A[n];
		int B[n];
		int P[n];
		for(int i= 0 ; i< n ; i++)
		{
			cin>>P[i];
			cin>>A[i];
			cin>>B[i];
			stat[A[i]] = false;
			stat[B[i]] = false;
		}	
		cout<<setprecision(10)<<prob(A,B,P,0,n)<<endl;
		stat.clear();
		T--;
	}
}
