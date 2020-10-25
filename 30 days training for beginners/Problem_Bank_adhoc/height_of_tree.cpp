// height of binary tree
#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
	
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};


int height(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	if(lheight>rheight)
	return 1+lheight;
	else
	return 1+rheight;
}


int main()
{
		struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	
	cout<<height(root);
	
}
