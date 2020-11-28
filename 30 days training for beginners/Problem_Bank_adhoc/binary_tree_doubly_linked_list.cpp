// binary tree to doubly linked list

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

void binary_to_dl(struct node*root,struct node**head)
{
	
	if(root==NULL)
	return;
	
	static node*prev=NULL;
	
	binary_to_dl(root->left,head);
	
	if(prev==NULL){
		
		*head=root;
	}
	
	else
	{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	
	binary_to_dl(root->right,head);
}

void printnode(struct node*node)
{
	
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->right;
	}
	
}


int main()
{
	

struct node*root=new node(10);

root->left=new node(12);

root->right=new node(15);

root->left->left=new node(25);

root->left->right=new node(30);

root->right->left=new node(36);

node*head=NULL;

binary_to_dl(root,&head);

printnode(head);	
	
}
