// postorder to bst
#include<bits/stdc++.h>
using namespace std;


struct tree
{
	int data;
	struct tree*left;
	struct tree*right;
	
	tree(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
	
};


void inorder(struct tree*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

struct tree* postordertoBst(vector<int>postorder)
{
	
	if(postorder.empty())
	return NULL;
	
	int sz=postorder.size();
	int root_data=postorder[sz-1];
	vector<int>smaller,greater;
	for(int i=sz-2;i>=0;i--)
	{
		if(postorder[i]<root_data)
		{
			smaller.push_back(postorder[i]);
		}
		else
		greater.push_back(postorder[i]);
	}
	
	struct tree*root=new tree(root_data);
	root->left=postordertoBst(smaller);
	root->right=postordertoBst(greater);
	
	return root;
}

int main()
{
	vector<int> postorder={2,3,1,5,6,7};
	
	struct tree*root=postordertoBst(postorder);

    inorder(root);
}
