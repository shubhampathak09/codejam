// given a complete binary tree
//count nodes

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

int countnodes(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int left=countnodes(root->left);
	int right=countnodes(root->right);
	
	return left+right+1;
	
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	
	cout<<countnodes(root);
}
