#include<iostream>
#include<vector>
#include<cstring>
#include<cstdlib>
using namespace std;

int fun (int i)
{ if(i%2) return (i+(7*4)-(5/2)+(2*2));
else return (i+(17/5)-(34/15)+(5/2));
}

main()
{
	int i = 2 ;
	const int* p = &i;
	(*p)++;
	i++;
	
	cout<<(*p);
}

