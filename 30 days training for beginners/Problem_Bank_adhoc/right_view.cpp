// RIGHT_VIEW
#include<bits/stdc++.h>
using namespace std;



//         1
//         /\
//        2  3
//       /    \
//      3      1
//	   / \     /
//     4  5    2
//         \   \
//          6   1  
//              /
//             0 
// 1 3 1 2 1 0



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

void rightview(struct node*root,int level,bool maxlevel[])
{
	
	if(root==NULL)
	return;
	
	if(maxlevel[level]==false)
	{
	
	cout<<root->data<<"\t";
	maxlevel[level]=true;
}
	rightview(root->right,level+1,maxlevel);
	rightview(root->left,level+1,maxlevel);
}
int main()
{
	
	
	
bool maxlevel[100];
memset(maxlevel,false,sizeof(maxlevel));

struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(3);
root->right->right=new node(1);
root->right->right->left=new node(2);
root->right->right->left->right=new node(1);
root->right->right->left->right->left=new node(0);
root->left->left->left=new node(4);
root->left->left->right=new node(5);
root->left->left->right->right=new node(6);
rightview(root,1,maxlevel);	
	
}
