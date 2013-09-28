#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

void reverse(char* s, int start, int end)
{
	for(int i=0; i< (end - start)/2 ; i++)
	{
		char temp = s[start + i];
		s[start + i] = s[end-i-1];
		s[end-i-1] = temp;
	}
}

int main()
{
	cout<<ceil(3/1)<<ceil((float)3/2);
}

