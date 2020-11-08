#include<bits/stdc++.h>
using namespace std;
// sorted array to bst


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



struct node*createbst(int a[],int start,int end)
{
 
	if(start>end)
	return NULL;
	
	int mid=(start+end)/2;
	
	struct node*root=new node(a[mid]);
	root->left=createbst(a,start,mid-1);
	root->right=createbst(a,mid+1,end);
	
	return root;
 } 
   //0 1  2 3
// 1 2 3  4 5 6

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	int a[]={2,3,4,5,6,7};
	
	int n=sizeof(a)/sizeof(a[0]);
//	cout<<n;
	struct node*root1=createbst(a,0,n-1);
    
//	struct node*root=new node(1);
//	root->left=new node(2);
		
	inorder(root1);
}
