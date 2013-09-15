#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

class node
{
	public:
		int val;
		node* next;
	node()
	{
		val  = 0;
		next = NULL;
	}			
};

class queue
{
	private:
		node* first;
		node* last;
	public:
		queue()
		{
			first = NULL;
			last = NULL;
		}
		void add(int a)
		{
			if(last == NULL)
			{
				last = new node();
				first = last;
				last->val = a;
				last->next = NULL;
			}
			else
			{
				node* temp = last;
				last = new node();
				last->val = a;
				last->next = NULL;
				temp->next = last;
			}
		}
		
		node* pop()
		{
			if(first == NULL)
			{
				return NULL;
			}
			else
			{
				node* temp = first;
				first = first->next;
			}
		}
			
};

int main()
{
	
}
