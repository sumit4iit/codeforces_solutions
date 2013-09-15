/*
Given an array of integers (positive or negative) find the lowest positive integer NOT present in that array.
*/
#include<iostream>
using namespace std;
int main()
{
long l=1024;
int i=1;
while(l>=1)
{
 l=l/2;
 i=i+1;
}
cout<<i ;
}
