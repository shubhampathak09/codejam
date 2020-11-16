//deletion from bst
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


struct node* minnode(struct node*root)
{
	struct node*curr=root;
	while(curr&&curr->left!=NULL)
	{
		curr=curr->left;
	}
	
	return curr;
}

struct node*deletenode(struct node*root,int key)
{
	if(root==NULL)
	return root;
	
	if(key<root->data)
	root->left=deletenode(root->left,key);
	else if(key>root->data)
	{
		root->right=deletenode(root->right,key);
	}
	
	else
	{
		if(root->left==NULL)
		{
			struct node*temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node*temp=root->right;
			free(root);
			return temp;
		}
			
	struct node*temp=minnode(root->right);
	root->data=temp->data;
	root->right=deletenode(root->right,key);
	
	}

	return root;
}

struct node*insert(struct node*root,int value)
{
	if(root==NULL)
	return new node(value);
	
	if(root->data>value)
	{
		root->left=insert(root->left,value);
	}
	else
	root->right=insert(root->right,value);
	
	return root;
}

void inorder(struct node*root)
{
	if(root==NULL)
	return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
struct node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);	 
   
    
    cout << "Inorder traversal of the given tree \n";
    inorder(root);
 
    cout << "\nDelete 20\n";
    root = deletenode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
     
}
