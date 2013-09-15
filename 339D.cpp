#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// create tree
void create_tree(typeof(vector<long long>*) *tree, long long int size)
{
	int turn = 0;
	while(size!=1)
	{
		for(long long int i=0; i<size ; i=i+2)
		{
			if(turn%2 == 0)
			{
				tree[turn+1]->push_back( (*tree[turn])[i] | (*tree[turn])[i+1] ); 
				
			}
			else
			{
 				tree[turn+1]->push_back( (*tree[turn])[i] ^ (*tree[turn])[i+1])  ; 				
			}
		}
		turn++;
		size = size/2;
	}
}

main()
{
	long long n,m;
	cin>>n>>m;
	vector<long long int>* tree[n+1];
	
	// initialize
	for(int i=0; i<n+1 ; i++)
	tree[i] = new vector<long long int>;
	
	
	long long pow = 1;
	pow = pow << n;
	
	// leaves
	vector<long long> temp;
	long long te;
	for(long long int i = 0; i<pow ; i++)
	{
		cin>>te;
		temp.push_back(te);
	}
	tree[0] = &temp;
	
	
	// one time job
	create_tree(tree, pow);

	while(m>0)
	{
		long long p,b;
		cin>>p>>b;
		
		(*tree[0])[p-1] = b;
		
		for(int i=1 ;i < sizeof(tree)/sizeof(tree[0]); i++)
		{
			if(i%2 == 1)
			{
				if(p%2 == 1)
				{
					(*tree[i])[(p-1)/2] = (*tree[i-1])[p-1] | (*tree[i-1])[p] ;  
				}
				else
				{
					(*tree[i])[(p-1)/2] = (*tree[i-1])[p-1] | (*tree[i-1])[p-2] ;  						
				}
			//	cout<<"debug : "<<(*tree[i])[(p-1)/2]<<endl;
			}
			else
			{
				if(p%2 == 1)
				{
					(*tree[i])[(p-1)/2] = (*tree[i-1])[p-1] ^ (*tree[i-1])[p] ;  
				}
				else
				{
					(*tree[i])[(p-1)/2] = (*tree[i-1])[p-1] ^ (*tree[i-1])[p-2] ;  						
				}
			//	cout<<"debug : "<<(*tree[i])[(p-1)/2]<<endl;
			}
			p = (p+1)/2  ;
		}
		m--;
/*		for(int i=0; i<sizeof(tree)/sizeof(tree[0]) ; i++)
		{
			for(typeof(tree[i]->begin()) it = tree[i]->begin(); it != tree[i]->end(); it++)
			{
				cout<<*it<<" ";
			}
			cout<<endl;
		}*/
		cout<<(*tree[n])[0]<<endl;
//		cout<<"------"<<endl;
	}
	
/*	*/
}
