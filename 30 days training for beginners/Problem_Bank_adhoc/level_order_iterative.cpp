// level ordered iterative

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

int height(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int lheight=height(root->left);
	int rheight=height(root->right);
	
   if(lheight>rheight)
   return 1+lheight;
   else
   return 1+rheight;
}

void printatlevel(struct node*root,int level)
{
	if(root==NULL)
	return;
	
	if(level==1)
	cout<<root->data<<"\t";
	
	printatlevel(root->left,level-1);
	printatlevel(root->right,level-1);
}

void levelorder(struct node*root)
{
//	if(root==NULL)
//	return;
	
	int level=height(root);
	
	for(int i=1;i<=level;i++)
	{
		printatlevel(root,i);
		cout<<"\n";
	}
}


int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->right->left=new node(4);
	root->right->right=new node(5);
	levelorder(root);
}
