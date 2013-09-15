#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool comp(char* a, char* b)
{
	int i = 0;
	for(i=0 ; i< min(strlen(a), strlen(b)) ; i++ )
	{
		if(a[i]>b[i])
		return a[i]>b[i];
		else if(b[i]>a[i])
		return b[i]>a[i];
	}
	if(strlen(a)>strlen(b))
	{
		if(a[i] > a[i-1])
		return a[i] > b[i];
		else
		return a[i] < b[i];
	}
	else
	{
		if(b[i]>b[i-1])
		return b[i] > a[i];
		else
		return b[i] < a[i];
	}
	
}
int main()
{
	
}
