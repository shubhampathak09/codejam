// lowest common ancestor

#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
};



struct node*createnode(int data)
{
	
	struct node*node=(struct node*)(malloc(sizeof(struct node)));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}


 bool findPath(struct node *root, vector<int> &path, int k) 
{ 
    // base case 
    if (root == NULL) return false; 
  
    // Store this node in path vector. The node will be removed if 
    // not in path from root to k 
    path.push_back(root->data); 
  
    // See if the k is same as root's key 
    if (root->data == k) 
        return true; 
  
    // Check if k is found in left or right sub-tree 
    if ( (root->left && findPath(root->left, path, k)) || 
         (root->right && findPath(root->right, path, k)) ) 
        return true; 
  
    // If not present in subtree rooted with root, remove root from 
    // path[] and return false 
    path.pop_back(); 
    return false; 
} 
int findlca(struct node*root,int n1,int n2)
{
	
	 vector<int>path1,path2;
	 
	 if(!findPath(root,path1,n1)||!findPath(root,path2,n2))
	 return -1;
	 
	 int i;
	 for(i=0;i<path1.size()&&i<path2.size();i++)
	 if(path1[i]!=path2[i])
	 break;
	 return path1[i-1];
}


int main()
{
	
	struct node * root = createnode(1); 
    root->left = createnode(2); 
    root->right = createnode(3); 
    root->left->left = createnode(4); 
    root->left->right = createnode(5); 
    root->right->left = createnode(6); 
    root->right->right = createnode(7); 
	
	cout<<findlca(root,4,5);
	
//	vector<int>path;
	
//	cout<<findPath(root,path,20);
}
