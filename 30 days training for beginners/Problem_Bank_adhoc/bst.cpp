//#include<bits/stdc++.h>
//using namespace std;
//
//class tree
//{
//	private:
//		int data;
//		tree*left;
//		tree*right;
//		
//		public:
//			
//			tree(int value)
//			{
//				this->data=value;
//				this->left=NULL;
//				this->right=NULL;
//			}
//			
//			tree* insert(int value,tree*root)
//			{
//				if(root==NULL)
//				return new tree(value);
//				
//				if(value<root->data)
//				root->left=insert(value,root->left);
//				
//				else
//				root->right=insert(value,root->right);
//				
//				return root;
//			}
//			void inorder(tree*root)
//			{
//				if(root==NULL)
//				return;
//				inorder(root->left);
//				cout<<root->data<<" ";
//				inorder(root->right);
//			}
//	
//};
//
//
//int main()
//{
//	
//	tree*root=NULL;
//	
//	root=root->insert(10,root);
//	root=root->insert(8,root);
//	root=root->insert(16,root);
//	root=root->insert(12,root);
//	
//	root->inorder(root); // traversal
//	}	


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

struct node*insert(int val,struct node*root)
{
	
	if(root==NULL)
	return new node(val);
	
	if(root->data>val)
	{
		root->left=insert(val,root->left);
	}
	else
	root->right=insert(val,root->right);
	
	return root;
}

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
	struct node*root=NULL;
	
	root=insert(20,root);
	root=insert(12,root);
	root=insert(22,root);
	root=insert(24,root);
	root=insert(35,root);
	
	inorder(root);
	
}
