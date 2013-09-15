#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct node
{
	int val;
	node* left;
	node* right;
	int height;
};

class bst
{
	node* root;
	public:
		bst()	
		{
			root = NULL;	
		}
		void Add(int x)
		{
			if(root == NULL)
			{
				root = new node();
				root->val = x;
			}
			else
			{
				node* temp = root;
				bool flag = true;
				while(flag)
				{
					if(temp->val > x )
					{
						if(temp->left!=NULL)
						{
							temp=temp->left;	
						}
						else
						{
							temp->left = new node();
							temp->left->val = x;
							flag = false; 
						}
					}
					else
					{
						if(temp->right!=NULL)
						{
							temp=temp->right;
						}
						else
						{
							temp->right = new node();
							temp->right->val = x;
							flag = false;
						}
					}
				}
			}
		}
		void inorder(node* temp)
		{
			if(temp->left == NULL )
			{
				 cout<<temp->val<<endl;
			}
			else
			{
				inorder(temp->left);
			}
			if(temp->left != NULL)
			{
				cout<<temp->val<<endl;
			}
			else if(temp->right!=NULL)
			{
				inorder(temp->right);
			}
		}
		
};


int main()
{
	return 0;
}
