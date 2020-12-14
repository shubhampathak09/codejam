
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
		this->left=NULL;
		this->right=NULL;
	}
};

class node_q
{
	public:
	void inorder(struct node*root)
	{
		if(root==NULL)
		return;
		
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
	
	void preorder(struct node*root)
	{
		if(root==NULL)
		return;
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
	
	void postorder(struct node*root)
	{
		if(root==NULL)
		return;
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
		
	}
	
	void printnode(struct node*node)
	{
		while(node!=NULL)
		{
			cout<<node->data<<" ";
			node=node->right;
		}
	}
	
	void convert_tree_dll(struct node*root,struct node**head)
	{
		
		if(root==NULL)
		return;
		
		static node*prev=NULL;
		
		convert_tree_dll(root->left,head);
		
		if(prev==NULL)
		{
			*head=root;
		}
		else
		{
			root->left=prev;
			prev->right=root;
		}
		prev=root;
		
		convert_tree_dll(root->right,head);		
	}
	
};

int main()
{
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	node_q n;
	
	cout<<"this is the inoder traversl"<<endl;
    n.inorder(root);
    cout<<endl;
    cout<<"this is the preorder traversal"<<endl;
    n.preorder(root);
    cout<<endl;
    cout<<"this is the postorder traversal"<<endl;
	n.postorder(root);
	cout<<endl;
	
	cout<<"printing the linked list"<<endl;
	
	struct node*head=NULL;
	
	n.convert_tree_dll(root,&head);
	

	n.printnode(head);	
}

// Pseudocode for left
/*
q.push(root->data);

while(!q.empty())
{
	int sz=q.front();
	for(int i=1;i<=sz;i++)
	{
		struct node*temp=q.front();
		q.pop();
		if(i==1)
		{
		 cout<<temp->data;
		}
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
	}
}
*/
