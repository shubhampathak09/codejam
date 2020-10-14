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


vector<int> levelorder(struct node*root)
{
	vector<int>result;
	if(root==NULL)
	return result;
	
	queue<node*>q;
	
	q.push(root);
	
	while(!q.empty())
	{
		struct node*curr=q.front();
		result.push_back(curr->data);
		q.pop();
		if(curr->left!=NULL)
		q.push(curr->left);
		if(curr->right!=NULL)
		q.push(curr->right);
		
	}
	
return result;
}


int main()
{
	
struct node*root=new node(1);
root->left=new node(2);
root->left->left=new node(3);
root->left->right=new node(4);
root->right=new node(5);



vector<int>ans=levelorder(root);


for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

	
}
