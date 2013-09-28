#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#define tr(it, con) for(typeof(con.begin()) it = con.begin(); it!= con.end(); it++)
using namespace std;

int main()
{
	string key ; 
	string text;
	map<int,char> ans;
	map<char,vector<int> > hash;
	cin>>key;
	
	while(key!="THEEND")
	{
		cin>>text;
		int size = key.size();
		int col_size = text.size()/size;	
		ans.clear();
		hash.clear();	
//		vector<string> data(105,"");	
		for(int i=0 ; i<size ; i++)
		{
			hash[key[i]].push_back(i);
		}
	
		int cur_index = 0;
	
		tr(it,hash)
		{
			for(int i=0 ; i< (it->second).size() ; i++)
			{
				for(int j = 0 ;j< col_size ; j++)
				{
					ans[j*size+(it->second)[i]] = text[cur_index];
				//	cout<<j*size+(it->second)[i]<<" "<<text[cur_index]<<endl;
					cur_index++;
				}
				
			}
		}
		
		tr(it,ans)
		{
			cout<<it->second;
		}
		cout<<endl;
		cin>>key;
	}
	return 0;
	
}
