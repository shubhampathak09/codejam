/ / preorder to bst 

#include<bits/stdc++.h>
using namespace std;


struct treenode
{
	int data;
	struct treenode*left;
	struct treenode*right;
	
	treenode(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};



struct treenode*root;


void inorder(struct treenode*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	
}

struct treenode*preordertoBst(vector<int>preorder)
{
	if(preorder.empty())
	return NULL;
	
	int root_val=preorder[0];
	vector<int>smaller,greater;
	
	for(int i=1;i<preorder.size();i++)
	{
		if(preorder[i]<root_val)
		{
			smaller.push_back(preorder[i]);
		}
		else
		greater.push_back(preorder[i]);
	}
  
    treenode*root1=new treenode(root_val);	
	root1->left=preordertoBst(smaller);
	root1->right=preordertoBst(greater);
	
	
	return root1;
}

int main()
{
	
  //root=new treenode();	
  vector<int>preorder={8,5,1,3,4,2};
  
  //treenode *root1=new treenode(1);
  //root1->left=new treenode(2);
  //root1->right=new treenode(3);
  
  root=preordertoBst(preorder);
  
  inorder(root);
   
 }
