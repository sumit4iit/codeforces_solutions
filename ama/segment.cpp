/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<iostream>
#include<set>
#include<map>
#include<vector>
#define tr(it,con) for(typeof(con.begin()) it = con.begin(); it!= con.end(); it++)
#define ll long long
#define ull unsigned long long
#include<cstring>
using namespace std;

// declaring a structure for node of a trie
struct node
{
	bool end;
	node* next[26];
	node()
	{
		for(int i = 0; i< 26; i++)
		{
			next[i] = NULL;
		}
		end = false;	
	}
};

class trie
{
	node* root;
	int count;
	public:
		trie()
		{
			root = NULL;
		}
		bool add(string s)
		{
			node* temp;
			if(root == NULL)
			{
				root = new node();
			}

			temp = root;

			for(int i = 0 ; i<s.size(); i++)
			{
				if(temp->next[s[i]-'a'] == NULL)
				{
					temp->next[s[i]-'a'] = new node();
				}
				temp = temp->next[s[i]-'a'];
			}
			temp->end = true;
		}
		
		// search if the existing string is 
		bool search(string s)
		{
			node* temp;
			if(!root)
				return false;
			else
			{
				temp  = root;
				for(int i=0 ;i< s.size(); i++)
				{
					if(!temp->next[s[i]-'a'])
						return false;
					else
						temp = temp->next[s[i]-'a'];
				}
				if(temp->end)
				{
					return true;
				}
			}
		}
};    

int main()
{
	// text
    string s;
    getline(cin,s);
    
    int n;
    scanf("%d", &n);
    
    string temp;
    trie t;
    
    while(n>0)
    {
    	cin>>temp;
    	t.add(temp);
    	n--;
    }
    set<string> cont;
    int start = 0;
    int count = 0;
    for(int i=0 ; i< s.size() ; i++)
    {
    	if(s[i] == ' ')
    	{
    		if( t.search(string(s.begin()+start,s.begin()+i-1)) )
			{
				cont.add(string(s.begin()+start,s.begin()+i-1));	
			}
    		start = i+1;
    		count = 0;
    	}
    	else
    	{
    		count++;
    	}
    	
    }
    
}
