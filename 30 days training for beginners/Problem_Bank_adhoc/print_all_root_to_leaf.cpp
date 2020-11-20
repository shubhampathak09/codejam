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

void printpath(struct node*root,int pathlen,int path[]);

void printwrapper(struct node*root)
{
	int path[100];
	printpath(root,0,path);
}

printpatharry(int path[],int pathlen)
{
	for(int i=0;i<pathlen;i++)
	cout<<path[i]<<" ";
	
}

void printpath(struct node*root,int pathlen,int path[])
{
	if(root==NULL)
	return;
	
	path[pathlen]=root->data;
	pathlen++;
	
	if(root->left==NULL&&root->right==NULL)
	{
		printpatharry(path,pathlen);
		cout<<endl;
	}
	
	else
	{
		printpath(root->left,pathlen,path);
		printpath(root->right,pathlen,path);
	}
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	printwrapper(root);
	
}
