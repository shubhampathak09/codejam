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


bool checkpathsum(struct node*root,int sum)
{
	
	if(root==NULL)
    return sum==0;
	
	 else
	 {
	 bool ans=0;
	 
	 int remsum=sum-root->data;
	 
	 if(remsum==0&&root->left==NULL&&root->right==NULL)
	 return true;
	 
	 if(root->left)
	 {
	 	ans=ans||checkpathsum(root->left,remsum);
		 }
	if(root->right)
	{
		ans=ans||checkpathsum(root->right,remsum);
			 }
	
	return ans;
			 	 	
	 }
	
	
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	cout<<checkpathsum(root,4)<<endl;
	
	cout<<checkpathsum(root,2);
	
	
}
