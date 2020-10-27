// traversals
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	
	node(int v)
	{
		data=v;
		left=NULL;
		right=NULL;
	}
};


void inorder(struct node*root)   // left root right
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(struct node*root)  //root left right
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


void postorder(struct node*root)  //left right root
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	inorder(root);
	cout<<" inorder";
	cout<<endl;
	preorder(root);
	cout<<" preorder";
	cout<<endl;
	postorder(root);
	cout<<" postorder";
}
