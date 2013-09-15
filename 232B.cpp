#include<iostream>
using namespace std;

int main()
{
	int n, k;
	long long int a[100005];
	scanf("%d%d", &n, &k);
	for(int i=0; i< n ; i++)
	{
		cin>>a[i];		
	}
	long long maxSumA = 0;
	long long maxSumB = 0;
	int A = 0,B = k;
	for(int i=0 ; i< k ; i++)
	{
		maxSumA += a[i];
		maxSumB += a[k+i];
	}
	
	int tempA = maxSumA;
	int tempB = maxSumB;
	
	for(int i = 1; i+ 2*k<= n ; i++ )
	{
			tempA -= a[i-1];
			tempA += a[i+k-1];
			if(maxSumA < tempA)
			{
				maxSumA = tempA;
				A = i;
			}
			tempB -= a[k+i-1];
			tempB += a[i+2*k-1];
			if(maxSumB < tempB)
			{
				maxSumB = tempB;
				B = i+k;
			}
	}

	cout<<A+1<<" " <<B+1<<endl;
}
