#include<iostream>
using namespace std;

void modify(char* k, int size)
{
	int count_space = 0;
	for(int i=0; i< size; i++)
	{
		if(k[i] == ' ')
		{
			count_space++;
		}
	}
	int newSize = size + 3*count_space;
	
	int counter = 0;
	
	for(int i = size -1; i>= 0; i--)
	{
		if(k[i]!= ' ')
		{
			k[newSize - counter - size + i] = k[i] ; 
		}
		else
		{
			k[newSize-counter - size + i] = '0'; counter++;
			k[newSize-counter - size + i] = '2'; counter++;
			k[newSize-counter - size + i] = '%'; counter++;			
		}
	}
}

int main()
{
	char k[] = {'a','b','v',' ','d',' '};
	int size = sizeof(k)/sizeof(k[0]);
	modify(k,size);
	for(int i = 0; k[i]!=NULL ; i++)
	{	
		cout<<k[i];
	}
	cin>>k[0];
	return 0;
	
}
