#include<iostream>
using namespace std;

int bits(int a, int b)
{
	int temp = a^b;
	cout<<temp<<endl;
	int count = 0;
	while(temp!=0)
	{
		if(temp%2 == 1)
		{
			count++;
		}
		temp = temp>>1;
	}
	return count;
}

int main()
{
	int a = 7;
	int b= 0;
	cout<<bits(a,b);
	return 0;
}
