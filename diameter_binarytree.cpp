// Diameter of binary tree

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

int height(struct node*node){
	if(node==NULL)
	return 0;
	
	int lheight=height(node->left);
	int rheight=height(node->right);
	
	return lheight>rheight ? 1+ lheight : 1+rheight;
}

int diameter(struct node*root)
{
	
	if(root==NULL)
	return 0;
	
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	return max(1+lheight+rheight,max(diameter(root->left),diameter(root->right)));
	
}

int main()
{
	
	
	 struct node *root = createnode(1); 
  root->left        = createnode(2); 
  root->right       = createnode(3); 
  root->left->left  = createnode(4); 
  root->left->right = createnode(5); 
	
	cout<<height(root);
	cout<<endl;
	cout<<diameter(root);
}
