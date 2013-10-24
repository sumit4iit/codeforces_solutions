#include<iostream>
using namespace std;

int main()
{
    int m,i;
    cin>>m;
    long long sum = 0,csum = 0;
    int s[105];
    for(i = 1 ; i<= m ; i++)
    {
        cin>>s[i];
        sum= sum + s[i];
    }
    int x,y;
    cin>>x>>y;
    for(i = 1 ; i<= m ; i++)
    {
        if(csum >= x && csum<=y && sum-csum>=x && sum-csum <= y )
        break;
        
        csum= csum + s[i];
    }
    if( i > m )
    cout<<0;
    else
    cout<<i;
}
