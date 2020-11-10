// inorder succesor

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

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

struct node* minvalue(struct node*root)
{
	struct node*curr=root;
	
	while(curr->left!=NULL)
	{
		 	
		curr=curr->left;
	}
	return curr;
}

struct node*inordersuccesor(struct node*root,struct node*n)
{
	if(n->right!=NULL)
	return minvalue(n->right);
	
    struct node*succ=NULL;
    
    while(root!=NULL)
    {
    	if(n->data<root->data)             //           10
    	{                                  //        9      19
    		succ=root;                     //     5     8
    		root=root->left;               //          7 
		}
    	else if(n->data>root->data)
    	{
    		root=root->right;
		}
		else
		break;
	}
	return succ;
}

int main()
{
	
	struct node*root=new node(20);
	root->left=new node(8);   //12
	root->right=new node(22);
	root->left->left=new node(4);  
	root->left->right=new node(12); // 20
	
	cout<<inordersuccesor(root,root->left)->data;  //represent the inorder succesor of 8
	
// debug;
//struct node*minv=minvalue(root);
//cout<<minv->data;
	
//	cout<<minvalue(root);

//inorder(root);
 
//int x= minvalue(root);

}
