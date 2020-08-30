// level order traversal

#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}


void levelorder(struct node*root)
{
	queue<node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		
		struct node *p=q.front();
//		cout<<
		q.pop();
		cout<<p->data;
		
		if(p->left!=NULL)
		q.push(p->left);
		
		if(p->right!=NULL)
		q.push(p->right);
	}
	
}


int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	
	levelorder(root);
	}
