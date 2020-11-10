//
#include<bits/stdc++.h>
// given a tree convert it to BST

#include<bits/stdc++.h>

using namespace std;

vector<int>temp;
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


void helper_arr(struct node*root)
{
	if(root==NULL)
	return;
	
	
	helper_arr(root->left);
	temp.push_back(root->data);
	helper_arr(root->right);
	
}

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


struct node*array_inorder(vector<int>a,int low,int high)
{
	
	if(low>high)
	{
		return NULL;
	}
	
	int mid=(low+high)/2;
	struct node*root=new node(a[mid]);
	root->left=array_inorder(a,low,mid-1);
	root->right=array_inorder(a,mid+1,high);
	return root;
}

int main()
{
	
	
	struct node*root=new node(10);
	root->left=new node(2);
	root->right=new node(7);
	root->left->left=new node(8);
	root->left->right=new node(4);
	
	helper_arr(root);
	
	cout<<"intial config of tree..";
	
	for(auto x: temp)
	{
		cout<<x<<" ";
	}
	
	cout<<endl;
	
	int n=temp.size();
	
//	cout<<n;
     sort(temp.begin(),temp.end());
	 	
	struct node*new_root=array_inorder(temp,0,n-1);
	
	cout<<"After re arragnge"<<endl;
	
	inorder(new_root);
}
