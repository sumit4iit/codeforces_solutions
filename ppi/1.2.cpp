#include<iostream>
using namespace std;

void reverse(char* k, int size)
{
	for(int i=0; i< size/2; i++)
	{
		char temp = k[i];
		k[i] = k[size-i-1];
		k[size-i-1] = temp;
	}
}

int main()
{
	char k[] = {'a','b','v','d'};
	int size = sizeof(k)/sizeof(k[0]);
	reverse(k,size);
	for(int i = 0; i<size ; i++)
	{	
		cout<<k[i];
	}
	cin>>k[0];
	return 0;
}

