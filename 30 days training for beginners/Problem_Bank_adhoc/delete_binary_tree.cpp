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

void _deletenode(struct node*root)
{
	if(root==NULL)
	return;
	
	_deletenode(root->left);
	_deletenode(root->right);
	cout<<root->data<<" "<<"deleted";
	delete(root);
	cout<<"\n";
}

void deletenode(struct node*root)
{
	_deletenode(root);
	
	root=NULL;
}


void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	cout<<"before Deleteion"<<"\n";
	
	inorder(root);
	
	cout<<"\n";
	
	cout<<"After deleteion"<<"\n";
	
	deletenode(root);
	
	
//	inorder(root);  // to check
}

