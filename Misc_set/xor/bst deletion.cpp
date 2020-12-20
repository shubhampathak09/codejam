// bst deletion 

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
		
		this->left=NULL;
		this->right=NULL;
		
	}
};


struct node*insert(struct node*root,int key)
{
	if(root==NULL)
	return new node(key);
	
	if(key<root->data)
	{
    root->left=insert(root->left,key); 	
	 
}
	else
	root->right=insert(root->right,key);
	
	return root;
}


void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

struct node*minval(struct node*root)
{
	
	struct node*curr=root;
	
	
	while(curr!=NULL&&curr->left!=NULL)
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
	{
		root->left=deletenode(root->left,key);
	}
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
			struct node*temp=root->left;
			free(root);
			return temp;
		}
		// two children
		
		
		struct node*inordesu=minval(root->right);
		root->data=inordesu->data; 
		
		root->right=deletenode(root->right,inordesu->data); // deletring that succesor once it is moved to root
	}
	
	return root;
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
	
	
	root=insert(root,9);
	
	inorder(root);
	
	//cout<<minval(root)->data;
	
	cout<<endl;
	
	cout<<"After Deleting 5"<<endl;
	
	root=deletenode(root,5);
	
	inorder(root);
}
