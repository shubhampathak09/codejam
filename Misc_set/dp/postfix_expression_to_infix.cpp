// expression tree
#include<bits/stdc++.h>
using namespace std;

struct et{
	char value;
	et*left;
	et*right;
    
	et(char c)
	{
		value=c;
		left=NULL;
		right=NULL;
		}	
};


bool isop(char c)
{
	
	if(c=='+'||c=='*'||c=='-'||c=='/')
	return true;
	return false;
}


void inorder(et *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		cout<<t->value<<" ";
		inorder(t->right);
	}
}


struct et*infixroot(string postfix,int n)
{
	
	stack<et*>st;
	
	for(int i=0;i<n;i++)
	{
		
		if(isop(postfix[i])==false)
		{
			et*node=new et(postfix[i]);
			st.push(node);
		}
		
		else
		{
			et*t=new et(postfix[i]);
			
			et*t1=st.top();
			st.pop();
			et*t2=st.top();
			st.pop();
			
			t->left=t2;
			t->right=t1;
			
			st.push(t);
		}
	}
	
	return st.top();
	
}

int solve(int left,int right,char c)
{
	if(c=='+')
	return left+right;
	else if(c=='-')
	return left-right;
	else if(c=='*')
	return left*right;
	else
	return left/right;
}

int eval(struct et*root)
{
	if(root==NULL)
	return 0;

    	if(!isop(root->value))
	{
		return root->value-'0';
		
	}
	
int left=eval(root->left);

int right=eval(root->right);
	
return solve(left,right,root->value);
	
	
	
}


int main()
{

string postfix="ab+ef*g*-";

int n=postfix.length();

struct et*root=infixroot(postfix,n);

string postfix1="53+";


struct et*root1=infixroot(postfix1,3);	
//cout<<root->value;	
//cout<<"hi";	
	
//inorder(root);


inorder(root1);

cout<<endl;

cout<<eval(root1);	
	
}
