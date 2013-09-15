#include<iostream>
using namespace std;

int main()
{
	int a,b ,c ,d ;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	
	double pNotR = 1 - a/b;
	double pNotZ = 1 - c/d;
	
	cout <<  ((double)(a/b)/ (1 - pNotR * pNotZ));
	return 0; 
}
