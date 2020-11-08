// bst to sorted
// tree to array

#include<bits/stdc++.h>

using namespace std;


vector<int>treearray;

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



void tree_to_array(struct node*root)
{
	
	if(root==NULL)
	return;
	
	tree_to_array(root->left);
	treearray.push_back(root->data);
	tree_to_array(root->right);
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	tree_to_array(root);
    
	for(auto x:treearray)
	{
		cout<<x<<" ";
	}
}
