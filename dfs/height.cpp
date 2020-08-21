#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
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

int height(struct node*node)
{
	
	if(node==NULL)
	return 0;
	int lheight=height(node->left);
	int rheight=height(node->right);
	
	return lheight>rheight ? 1+rheight : 1+ lheight;
}

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	
	cout<<height(root);
	
}
