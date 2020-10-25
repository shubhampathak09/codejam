// level order traversal
#include<bits/stdc++.h>
using namespace std;

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


void bfs(struct node*root)
{
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		struct node*temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
		q.push(temp->left);
		if(temp->right!=NULL)
		q.push(temp->right);
	}
	
}

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	 bfs(root);
}
