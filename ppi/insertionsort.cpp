#include<iostream>
using namespace std;

int main()
{
	int length = 10;
    int a[] = {5,3,8,2,4,1,4,2,7,5};
    
    for(int i=1; i<length; i++)
    {
    	int key = a[i];
    	int j = i-1;
    	while(a[j]> key && j>=0)
    	{
    		a[j+1] = a[j];
    		j--;
    	}
    	a[j+1] = key;
    }
    
    for(int i=0; i<length; i++)
    {
    	cout << a[i];
    }
    cin>>a[1];
    return 0;
}
