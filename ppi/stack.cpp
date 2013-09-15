#include<iostream>
using namespace std;

struct node
{
	int val;
	node* next;
};

Class stack
{
	node* top;
	public:
		stack()
		{
			top = NULL;
		}
		void push(int x)
		{
			if(top == NULL)
			{
				top = new node();
				top.next = NULL;
				top.val = x;
			}
			else
			{
				node* temp = top;
				top = new node();
				top->next= temp;
				top->val = x;
			}
		}
		node* pop()
		{
			if(top == NULL)
			{
				return NULL;
			}
			else
			{
				node* temp = top;
				top = top->next;
				return temp;
			}		
		}
}


