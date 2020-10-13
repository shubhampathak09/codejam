// check if binary tree has duplicate values

#include<bits/stdc++.h>
using namespace std;


vector<int>a;

struct node
{
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

void inorder(struct node*root)
{
	if(root==NULL)
	return ;
	
	inorder(root->left);
	a.push_back(root->data);
	inorder(root->right);
}


bool checkduplicates(struct node*root)
{
	inorder(root);
	
	map<int,int>fmp;
	for(int i=0;i<a.size();i++)
	{
		fmp[a[i]]++;
	}
	
	map<int,int>::iterator it;
	for(it=fmp.begin();it!=fmp.end();++it)
	{
		if(it->second>=2)
		return true;
	}
	return false;
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(3);
	root->right=new node(2);
	
	cout<<checkduplicates(root);
	
}
