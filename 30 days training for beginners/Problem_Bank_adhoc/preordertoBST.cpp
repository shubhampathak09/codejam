#include<bits/stdc++.h>
using namespace std;
//
//// preorder to BST
//
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
//
//
//struct node*createBST(vector<int>preorder)
//{
//	
//	if(preorder.empty())
//	return NULL; 
//	
//	vector<int>smaller,greater;
//	int root_data=preorder[0];
//	for(int i=1;i<preorder.size();i++)
//	{
//		if(preorder[i]<preorder[0])
//		smaller.push_back(preorder[i]);
//		else
//		greater.push_back(preorder[i]);
//	}
//	struct node*root=new node(root_data); 
//	root->left=createBST(smaller);
//	root->right=createBST(greater);
//	
//	return root;
//}
//
void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
//
//int main()
//{
//	vector<int>preorder={10,5,1,7,40,50};
//	
//	struct node*root=createBST(preorder);
//	
//	inorder(root);
//	
//}

 

struct node*createbst(vector<int>preorder)
{
	if(preorder.empty())
	return NULL;
	
	struct node*root=new node(preorder[0]);
	vector<int>smaller,greater;
	for(int i=1;i<preorder.size();i++)
	{
		if(preorder[i]<preorder[0])
		smaller.push_back(preorder[i]);
		else
		greater.push_back(preorder[i]);
	}
	root->left=createbst(smaller);
	root->right=createbst(greater);
	
	return root;
}



int main()
{

vector<int>a={1,2,3,4,5,6};
	
	struct node*root=createbst(a);
	
	inorder(root);
}
