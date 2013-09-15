#include<iostream>
#include<algorithm>
#include<map>

#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
using namespace std;


int main()
{
	int hash[26] = {0}, temp_hash[26] = {0};
	
	
	int count;
	int n;
	string data;
	cin>>data;
	cin>>n;
	for(int i=0; i< s.length(); i++)
	{
		hash[s[i]-'a']++;
		temp_hash[s[i]-'a']++;
		if(hash[s[i]-'a'] == 1)
			count++;
	}
	
	if(n<count)
	{
		cout<<-1;
		return 0;
	}
	if(n == count)
	{
		int min = 0;
		for(int i=0; i< 26; i++)
		{
			if(hash[i] > 0)
			{
				cout<< (char) i+'a';
				if(min<hash[i])
				min = hash[i];
			}
		}
		cout<<endl<<min;
	}
	
	int sum = 0;
	for(int i=0 ; i< 26; i++)
	{
		if(hash[i]!=0)
		{
			cout<<(char) i+'a';
			hash[i]--;
			sum = sum+hash[i];
		}
		
	}
}
