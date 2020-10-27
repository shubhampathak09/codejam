// bottom view
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



void bottomview(struct node*root,map<int,vector<int>>&m,int distance)
{
	if(root==NULL)
	return;
	
	m[distance].push_back(root->data);
   // cout<<m[distance][0];	
	bottomview(root->left,m,distance-1);
	bottomview(root->right,m,distance+1);
}


int main()
{
//	m[-2].push_back(2);
//	m[-2].push_back(1);
	
//  for(int i=0;i<m[-2].size();i++)
//  cout<<m[-2][i];
/*
struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
map<int,vector<int>>m,m1;

bottomview(root,m,0);

map<int,vector<int>>::iterator it;

for(it=m.begin();it!=m.end();++it)
{
 for(int i=0;i<m[it->first].size();i++)
 {
 	cout<<m[it->first][i]<" ";
 }
 cout<<endl;
 } 
 
 
 */
 
 
 // second tree
map<int,vector<int>>m1; 
 struct node *root1 = new node(20); 
    root1->left = new node(8); 
    root1->right = new node(22); 
    root1->left->left = new node(5); 
    root1->left->right = new node(3); 
    root1->right->left = new node(4); 
    root1->right->right = new node(25); 
    root1->left->right->left = new node(10); 
    root1->left->right->right = new node(14); 

    bottomview(root1,m1,0);
    
	
map<int,vector<int>>::iterator it1;

for(it1=m1.begin();it1!=m1.end();++it1)
{
 for(int i=0;i<m1[it1->first].size();i++)
 {
 	cout<<m1[it1->first][i]<<" ";
 }
 cout<<endl;
 }  
}




 
