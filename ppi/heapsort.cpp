#include<iostream>
using namespace std;

const int size = 8;

int left(int i)
{
	return 2*i+1;
}

int right(int i)
{
	return 2*i+2;
}

void heapify(int a[],int i)
{
	int largest =i;
	if(left(i)< size && a[left(i)]>a[largest])
	{
		largest = left(i);
	}
    if(right(i)< size && a[right(i)]>a[largest])
	{
		largest = right(i);
	}
	if(largest != i)
	{
		int t = a[i];
		a[i] = a[largest];
		a[largest] = t;
		heapify(a,largest);	
	}
}


int main()
{
	int a[] = {0,1,2,3,4,5,6,7};
	for(int i= size/2; i>=0; i-- )
	heapify(a,i);
	for(int i=0; i<size; i++)
	cout<<a[i]<<endl;
}

