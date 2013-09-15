#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string a;
	bool test = true;
	cin>>a;
	for(int i=0 ; i< a.length() ;)
	{
		if(i+3 <= a.length() && a.substr(i,3) == "144" )
		i = i+3;
		else if(i+2<=a.length() && a.substr(i,2) == "14")
		i=i+2;
		else if(a[i] == '1')
		i++;
		else
		{
			test = false;
			break;
		}
	}
	if(!test)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}
