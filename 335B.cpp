#include<iostream>
#include<string>
using namespace std;

struct node 
{
	string a;
	int length;
	node()
	{
		length = 0;
		a = "\0";
	}
};

int max(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
}

int table[2600][2600];

int LCS(char* a, char* b, int i, int j)
{
	if(i>j)
	{
		if(table[i][j]!=-1)
		{
			return table[i][j];
		}
		if(a[i] == a[j])
		{
			table[i+1][j-1] = 1+LCS(a,b,i+1,j-1);
			return table[i+1][j-1];
		}
		else
		{
			if(table[i+1][j] == -1)
			table[i+1][j] = LCS(a,b,i+1,j);
			if(table[i][j-1] == -1)
			table[i][j-1] = LCS(a,b,i+1,j);
			
			return max(table[i][j-1],table[i+1][j]);
		}
	}	
}

int main()
{
	
}
