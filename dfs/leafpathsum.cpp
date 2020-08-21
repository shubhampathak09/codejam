// to find the sum of all leaf node values in tree
#include<bits/stdc++.h>
using namespace std;

int s=0;

struct node{
	
	int data;
	struct node*left;;
	struct node*right;
};

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
	
}


void leafpathsum(struct node*root)
{
	
	if(root==NULL)
	return;
	
	if(root->left==NULL&&root->right==NULL)
	 s+=root->data;
	
	leafpathsum(root->left);
	leafpathsum(root->right);
	 
}

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->right->left=createnode(4);
	root->right->right=createnode(5);
	
	leafpathsum(root);
	
	cout<<s;
}
