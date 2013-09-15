#include<iostream>
using namespace std;
int main()
{
  int n,sq;
  scanf("%d",&n);
  sq = n*n;

  for(int i=1; i<=sq/2; i++)
    printf("%d %d\n",i,sq+1-i);
  return 0;
}
