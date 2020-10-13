// to check if it is bst then check:- min value in left is less than root and max value in right in greater than root

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};


int minvalue(struct node*root)
{
	if(root==NULL)
	{
		return INT_MAX;
	}
	int val=root->data;
	int lval=minvalue(root->left);
	int rval=minvalue(root->right);
	
	if(val>lval)
	val=lval;
	if(val>rval)
	val=rval;
	
	return val; 
}


int maxvalue(struct node*root)
{
	if(root==NULL)
	{
		return INT_MIN;
	}
	int val=root->data;
	int lval=maxvalue(root->left);
	int rval=maxvalue(root->right);
	
	if(val<lval)
	val=lval;
	if(val<rval)
	val=rval;
	
	return val; 
}


bool checkbst(struct node*root)
{
	if(root==NULL)
	{
		return 1;
	}
	
	if(root->left!=NULL&&minvalue(root->left)>root->data)
	return 0;
	
	if(root->right!=NULL&&maxvalue(root->right)<root->data)
	return 0;
	
	if(checkbst(root->left)==0||checkbst(root->right)==0)
	return 0;
	
	return 1;
}



int main()
{
	struct node*root=new node(1);  // works when node is zero ->false;
	
	root->left=new node(2);
	
	root->right=new node(5);
	
	root->left->left=new node(1);
	
	root->left->right=new node(3);
	
	cout<<checkbst(root);
}
