#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;
};

class list
{
	public:
		node* root;
		list()
		{
			root = NULL;
		}
		void Add(int a)
		{
			if(root == NULL)
			{
				root = new node();
				root->val = a;
				root->next = NULL;
			}
			else
			{
				node* temp = root;
				while(temp->next!=NULL)
				{
					temp= temp->next;
				}
				temp->next = new node();
				temp = temp->next;
				temp->val = a;
				temp->next = NULL;
			}
		}
		
		node* reverse(node* curr, node* next)
		{
			if(curr == NULL)
			{
				return NULL;
			}
			else if(next == NULL)
			{
				return curr;
			}
			else
			{
				node* temp = next->next;
				next->next = curr;
				return reverse(next,temp);
			}
		}

		node* GetNthNodeFromTheEnd(int n)
		{
			int count = 0;
			node* a = root; node* b = root;
			while(count<n)
			{
				if(a->next != NULL)
				a = a->next;
				else
				return NULL;
				
				count++;
			}
			while(a!=NULL)
			{
				a = a->next;
				b = b->next;
			}
			return b;
		}
		
		void Display()
		{
			node* temp = root;
			while(temp!=NULL)
			{
				cout<<temp->val;
				temp=temp->next;
			}
			
		}		
};



int main()
{
	list s;
	for(int i=0; i< 10; i++)
	{
		s.Add(i);
	}
	
	cout<<s.GetNthNodeFromTheEnd(3)->val;
	
	int a;
	cin>>a;
		
	return 0;
}
