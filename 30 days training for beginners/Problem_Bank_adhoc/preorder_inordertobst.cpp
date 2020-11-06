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


void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	
}

struct node*totree(int &preindx,int start,int end,int preorder[],map<int,int>mp)
{

if(start>end)
return NULL;

struct node*root=new node(preorder[preindx]);
 
int index=mp[preorder[preindx]];
preindx++;
root->left=totree(preindx,start,index-1,preorder,mp);
root->right=totree(preindx,index+1,end,preorder,mp);

return root;	
}

int main()
{
	
int pre[] = {3,9,20,15,7};
int in[] = {9,3,15,20,7};

map<int,int>mp;

int n=sizeof(pre)/sizeof(pre[0]);

for(int i=0;i<n;i++)
{
	mp[in[i]]=i;
}

int preindx=0;
struct node*root=totree(preindx,0,n-1,pre,mp);

 
inorder(root);	
	
	
}
