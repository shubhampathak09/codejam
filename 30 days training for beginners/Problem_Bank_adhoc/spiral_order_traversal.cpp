// spiral order traversal

/*
                                   1                      1     odd->left->right
                                 /   \                    3 2   even->right to left
                                2     3                   4 5 1 2 
                               / \    / \                 7 6  ->spiral order traversal
  						      4   5  1  2
							  / \
							 6  7 
				 
							 
*/							 

#include<bits/stdc++.h>
using namespace std;

struct node
{
	
	int data;
	struct node*left;
	struct node*right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
 };
				 
/*struct node*createnode(int data){
	struct node*node=(struct node*)malloc*(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
}*/							 


int height(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int lh=height(root->left);
	int rh=height(root->right);
	
	if(lh>rh)
	return 1+lh;
	else
	return 1+rh;
}

void printat_level_left(struct node*root,int level)
{
	if(root==NULL)
	return;
	
	if(level==1)
	cout<<root->data<<"\t";
	
	printat_level_left(root->left,level-1);
	printat_level_left(root->right,level-1);
	
}

void printat_level_right(struct node*root,int level)
{
	if(root==NULL)
	return;
	
	if(level==1)
	cout<<root->data<<"\t";
	
	printat_level_right(root->right,level-1);
	printat_level_right(root->left,level-1);
	
}

void spiralorder(struct node*root)
{
	
	int level=height(root);
	
	for(int i=1;i<=level;i++)
	{
		if(i%2==0)
		{
		
		printat_level_right(root,i);
	    cout<<"\n";	
	}
		else
		{
		
		printat_level_left(root,i);
		cout<<"\n";
	}
	
	}
	
}


	
int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);	
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(1);
	root->right->right=new node(2);
	root->left->left->left=new node(6);
	root->left->left->right=new node(7);
	
	
	spiralorder(root);
	
													  }					 							 
