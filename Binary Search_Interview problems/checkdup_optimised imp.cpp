// optimised impl check duplicates
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node*left;
	struct node*right;
	
	node(int da)
	{
		data=da;
		left=NULL;
		right=NULL;
	}
};


bool checkdup(struct node*root,set<int>&s)
{
	if(root==NULL)
	return false;
	
	if(s.find(root->data)!=s.end())
	return true;
	
	s.insert(root->data);
	
	return checkdup(root->left,s)||checkdup(root->right,s);
	}

int main()
{
	struct node* root = new node(1); 
    root->left = new node(2); 
    root->right = new node(4); 
    root->left->left = new node(2); 
	
	set<int>se;
	
	cout<<checkdup(root,se);
}
