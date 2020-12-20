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

struct node*insert(struct node*root,int data)
{
	
	if(root==NULL)
	return new node(data);
	
	if(root->data<data)
	root->right=insert(root->right,data);
	else if(root->data>data)
	root->left=insert(root->left,data);
	
	return root;
}

struct node*search(struct node*root,int val)
{
	if(root==NULL||root->data==val)
	return root;
	
	if(root->data>val)
	return search(root->left,val);
	
	else
	return search(root->right,val);
}

int main()
{
	
	struct node*root=NULL;
    
    
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,7);
	
	root=insert(root,2);
	
	root=insert(root,13);
	
	root=insert(root,8);
	
	root=insert(root,3);
	
	
	struct node*temp=search(root,0);
	
	
	if(temp==NULL)
	{
		cout<<"does not exisit";
	}
	else
	{
		cout<<"Key exists.."<<temp->data;
	}
}
