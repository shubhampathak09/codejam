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

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

bool checkIdentical(struct node*root1,struct node*root2)
{
	
	if(root1==NULL&&root2==NULL)
	return 1;
	
	if(root1==NULL&&root2!=NULL)
	return 0;
	
	if(root1!=NULL&&root2==NULL)
	return 0;
	
	
	return (root1->data==root2->data&&checkIdentical(root1->left,root2->left)&&checkIdentical(root1->right,root2->right));
}


int main()
{

struct node*root1=new node(1);
root1->left=new node(2);
root1->right=new node(3);	


struct node*root2=new node(1);
root2->left=new node(2);
root2->right=new node(3);

//inorder(root1);

cout<<checkIdentical(root1,root2);
	
}
