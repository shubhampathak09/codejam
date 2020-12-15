#include<bits/stdc++.h>
using namespace std;


class tree
{
	
	private:
		int data;
		tree*left,*right;
		
		public:
			tree(int data)
			{
				this->data=data;
				this->left=NULL;
				this->right=NULL;
			}
			
		
		void inorder(tree*root)
		{
			
			if(root==NULL)
			return;
			
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
		
		
		tree* insert(int value,tree*root)
		{
			
			if(root==NULL)
			{
				return new tree(value);
			}
			
			if(root->data>value)
			{
				root->left=insert(value,root->left);
			}
			else
			root->right=insert(value,root->right);
	
	
	        return root;
		}
			
};


int main()
{
	
	tree*root=NULL;
	
	root=root->insert(10,root);
	root=root->insert(11,root);
	root=root->insert(6,root);
	root=root->insert(4,root);
	
	root->inorder(root);
}
