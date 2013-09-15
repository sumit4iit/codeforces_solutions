#include<iostream>
using namespace std;

int size = 8;

void createTree(int* bst,int b_curr, int* data, int ind)
{
	bst[b_curr] = data[ind];
	if(ind >= 0 || ind < size)
	{
		createTree(bst, b_curr*2+1, data, size/2-1);
		createTree(bst, b_curr*2+2, data, size-size/2);
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8};
	int bst[size];
	createTree(bst, 0, a, size);
	for(int i= 0 ; i< size; i++)
	{
		cout<<bst[i];
	}
			
}
