// given a preorder
// convert it to BST


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

struct node*createbst_from_preorder(vector<int>a)
{
	if(a.empty())
	{
		return NULL;
	}
	
	
	vector<int>smaller,larger;
	
	for(int i=1;i<a.size();i++)
	{
		if(a[i]<a[0])
		smaller.push_back(a[i]);
		else
		larger.push_back(a[i]);
	}
	
	struct node*root=new node(a[0]);
	root->left=createbst_from_preorder(smaller);
	root->right=createbst_from_preorder(larger);
	return root;
}

int main()
{
	
vector<int>preorder={10,5,1,5,40,50};	

struct node*root=createbst_from_preorder(preorder);

//cout<<root->data;

inorder(root);


//cout<<root->right->data;

	
}
