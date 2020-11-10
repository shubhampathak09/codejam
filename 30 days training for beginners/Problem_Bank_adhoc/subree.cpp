//SHITTT

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

bool isidentical(struct node*n1,struct node*n2)
{
	
	if(n1==NULL&&n2==NULL)
	return true;
    	if(n1==NULL&&n2!=NULL)
	return 0;
	
	if(n1!=NULL&&n2==NULL)
	return 0;
	
	return (n1->data==n2->data)&&isidentical(n1->left,n2->left)&&isidentical(n1->right,n2->right);
	
}



bool issubtree(struct node*tree,struct node*subtree)
{
	
	if(subtree==NULL)
	return true;
	if(tree==NULL)
	return false;
	
	if(isidentical(tree,subtree))
	return true;
    else	
	return (issubtree(tree->left,subtree))||(issubtree(tree->right,subtree)); 
}



int main()
{
//	cout<<"hi";

struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);

struct node*root2=new node(1);
root->left=new node(2);
root->right=new node(3);

cout<<issubtree(root,root->right)<<endl;

cout<<issubtree(root,NULL)<<endl;

cout<<issubtree(NULL,root)<<endl;

cout<<issubtree(NULL,NULL)<<endl;

//cout<<isidentical(root,root2);
}
