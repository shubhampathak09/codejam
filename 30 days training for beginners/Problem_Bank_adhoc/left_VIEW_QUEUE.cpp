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


void left_view(struct node*root)
{
	queue<node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		int sz=q.size();
		for(int i=1;i<=sz;i++)
		{
			struct node*temp=q.front();
			q.pop();
			if(i==1)
			cout<<temp->data<<" ";
			if(temp->left)
			q.push(temp->left);
			if(temp->right)
			q.push(temp->right);
		}
	}
	
}

 

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	left_view(root);
	
	cout<<endl;
	
	 
}
