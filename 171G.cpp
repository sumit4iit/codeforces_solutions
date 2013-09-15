#include<iostream>
using namespace std;
int main()
{
	int n[3];
	for(int i=0 ; i< 3; i++)
	cin>>n[i];
	
	int temp;
	for(int i=0 ; i< n[2]; i++  )
	{
		temp = n[0];
		n[0] = n[1];
		n[1] = temp + n[0];
	}
	
	cout<<n[0];
}
