#include<iostream>
using namespace std;
const int size = 2000;
int hash[size];
int map(char k)
{
	return (int) (k - (int) 'a');
}

int mapBack(int i)
{
	return (char)(i + (int) 'a');
}

bool unique(char* a , int size)
{
	for(int i= 0 ; i< size; i++)
	{
		if(hash[map(a[i])]++ > 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char a[] = {'a','c','b'};
	if(unique(a, 3))
	{
		cout<<"ok";
	}
	else
	cout<<"failed";
	
	cin>>a[0];
	
	return 0;
	
}
