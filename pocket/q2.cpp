#include<stdio.h>
 #include <iostream>
 #include <math.h>
 
 int main()
{ 
	int arr[]={1,2,3,4,3,2,1,4};
	int hash[100000]= {0};
	printf(" inputs are :" );
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
           printf(" %d ", arr[i]);
    }
	
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
	       hash[arr[i]]= hash[arr[i]] + 1;
	        if(hash[arr[i]] %2 ==1)
                hash[arr[i]] = 1;
	}

    int sum =0;
	int j = 0;
	for(int i=0;i<sizeof(hash)/sizeof(int);i++)
	{
            if(hash[i] == 1)
            {
               sum = sum + i;
               j++;
            }             
	}
	
	int temp[j];
	int k=0;
	for(int i=0;i<sizeof(hash)/sizeof(int);i++)
	{
	     if(hash[i]==1)
         {
            temp[k] = i;
            k++;
         }
	}

	int maxSum = sum, minSum = 0;
	int dif=sum;
	for(int i=0;i<sizeof(temp)/sizeof(int)-1;i++)
	{
         minSum = minSum+temp[i];
         maxSum = maxSum -temp[i];
         
         
         if(dif > abs(maxSum -minSum) )
         {
                dif = abs(maxSum -minSum);
         }
         
	}
	printf("\nresult: %d\n", dif);
	getchar();
	return 0;
}
