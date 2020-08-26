// express eval
#include<bits/stdc++.h>
using namespace std;

struct node
{
	string exp;
	struct node*left;
	struct node*right;
	node(string s)
	{
		exp=s;
		left=NULL;
		right=NULL;
	}
	
};
//
//struct node*createnode(string s)
//{
//	
//	struct node*node=(struct node*)malloc(sizeof(struct node));
//	node->exp=s;
//	node->left=NULL;
//	node->right=NULL;
//	return node;
//}

int toint(string s)
{
	
	int num=0;
	
	if(s[0]!=-1)
	{
		
		for(int i=0;i<s.length();i++)
		num=num*10+s[i]-'0';
		return num;
	}
	else
	{
		for(int i=1;i<s.length();i++)
		num=num*10+s[i]-'0';
		return -1*num;
	}
	
}

int eval(struct node*root)
{
	
	//cout<<"xmd";
	if(root==NULL)
	return 0;
	
	if(root->left==NULL&&root->right==NULL)
	return toint(root->exp);
	
	int l_val=eval(root->left);
	int r_val=eval(root->right);
	
	if(root->exp=="+")
	return l_val+r_val;
	if(root->exp=="-")
	return l_val-r_val;
	if(root->exp=="*")
	return l_val*r_val;
	if(root->exp=="/")
	return l_val/r_val;
	
	
}

int main()
{
//	
//	struct node*root=createnode("+");
//	root->left = createnode("*");  
//    root->left->left = createnode("5");  
//    root->left->right = createnode("-4");  
//    root->right = createnode("-");  
//    root->right->left = createnode("100");  
//    root->right->right = createnode("20");  
    //cout <<eval(root) << endl; 
//cout<<root->exp;
///cout<<toint("123");

struct node*root=new node("+");
//	root->left = new node("*");  
//    root->left->left = new node("5");  
//    root->left->right = new node("-4");  
//    root->right = new node("-");  
//    root->right->left = new node("100");  
//    root->right->right = new node("20");

  root->left=new node("5");
  root->right=new node("4");
  
cout<<eval(root);

// Yesssssssssssssss
}
