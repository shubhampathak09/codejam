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

void inorder(struct node*root){
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}



int find_max(struct node*root)
{
	if(root==NULL)
	return INT_MIN;
	
	int res=root->data;
	int lres=find_max(root->left);
	int rres=find_max(root->right);
	if(res<lres)
	res=lres;
	if(res<rres)
	res=rres;
	
	return res;
}
int main()
{

struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);

inorder(root);


int m=find_max(root);

cout<<endl;

cout<<"Max Val:=";

cout<<m;	
}
