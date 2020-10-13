// check-bst using inorder traversal
#include<bits/stdc++.h>
using namespace std;

// inorder traversal of bst produces a sorted list, so simple check if a list is sorted or not

vector<int>a;

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


bool checkbst(struct node*root)
{
	if(root==NULL)
	return true;
	
	checkbst(root->left);
	a.push_back(root->data);
	checkbst(root->right);
    
}

bool solve(vector<int>re)
{
	
	for(int i=0;i<re.size()-1;i++)
	{
		if(re[i+1]<re[i])
		return false;
	}
	return true;
}

int main()
{
	struct node*root=new node(3);
	root->left=new node(2);
	root->right=new node(1);
	
	checkbst(root);
    
	cout<<solve(a);	
 
}
