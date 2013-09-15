#include <iostream>
#include<algorithm>
using namespace std;

int compr(int a, int b)
{
	return b-1; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    while(n!=0)
    {
    int a[1005];
    
    int hash[100007];
    
    int sum = 0;
    
    for(int i=0 ; i< n; i++)
    {
        cin>>a[i];
        sum = sum+ a[i];
    }
    
    int mid = sum/2;
    
    int cur = 0;
    int min = 100000;
    
    int sub_sum = 0;
    
    sort(a,a+n,compr);
    
    for(int i=0; i<n ;i++ )
    {
        cur = 0;
        for(int j=i ; j<n ; j++)
        {    
            cur = cur+a[i];
            if(abs(cur-mid) < min)
            {
                min = abs(cur-mid);
                sub_sum = cur;
            }
            if(cur>mid)
            {
                break;
            }
        }
    }
    
        cout<<abs(sum - 4*sub_sum)<<endl;
        cin>>n;
    }
    
        
    
    return 0;
}
