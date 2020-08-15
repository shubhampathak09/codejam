
// k sum paths in tree
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
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void printpath(vector<int>&path,int j)
{
	for(int i=j;i<path.size()-1;i++)
	cout<<path[i]<<"->";
	cout<<path[path.size()-1];
}

int countn=0;
int printkpath(struct node*root,int k,vector<int>&path)
{
	
	
	if(root==NULL)
	return 0;
	
	path.push_back(root->data);
	
	printkpath(root->left,k,path);
	printkpath(root->right,k,path);
    
	int f=0;
	for(int i=path.size()-1;i>=0;i--)
	{
		f+=path[i];
		if(f==k)
		{
			printpath(path,i);
			cout<<endl;
			countn++;
		}
		
		}	
	
	path.pop_back();
}

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(7);
	root->right=createnode(3);
	root->right->left=createnode(5);
	root->right->right=createnode(4);
	
	vector<int>path;
	
	int number_paths=printkpath(root,8,path);
	
	cout<<endl;
	
	cout<<"number of paths are "<<countn;
}

