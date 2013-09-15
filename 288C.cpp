#include<iostream>
#include<string>
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#include<vector>
#include<map>

using namespace std;

class CityMap 
{
map<char,int> m;
map<int,char> rm;
public:
	string getLegend(vector<string> s, vector<int> i)
	{
		for(typeof(s.begin()) it= s.begin(); it!= s.end(); it++  )
		{
			int j=0;
			string tmp = *it;
			while( tmp[j] != NULL )
			{	
				if(m.find( tmp[j] )!= m.end() )
				m[(*it)[j]]++;
				else
				m[(*it)[j]] = 1;		
				
				j++;	
			}
		}
		tr(m,it)
		{
			rm[it->second] = it->first; 
		}
		string str;
		tr(i,it)
		{
			str.push_back(rm[*it]); 
		}
		
		return str;
	}
	
};

int main()
{
  return 0;
}
