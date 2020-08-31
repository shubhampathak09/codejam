// expression tree evaluation

#include<bits/stdc++.h>
using namespace std;

struct node
{
	string val;
	struct node*left=NULL;
	struct node*right=NULL;
	
	node(string s)
	{
		
		val=s;//n
	//	left=NULL;
	//	right=NULL;
		
	}
	
};

//int toint(string s)
//{
//	int num=0;
//	if(s[0]!=-1)
//	{
//		
//		for(int i=0;i<s.length();i++)
//		{
//			num=num*10+s[i]-'0';
//		}
//		return num;
//	}
//	else
//	{
//	//	int num=0;
//	for(int i=1;i<s.length();i++)
//	{
//		num=num*10+s[i]-'0';
//	}
//		return -1*num;
//	}
//}
//
//int eval(struct node*root)
//{
//	
//	if(root==NULL)
//	return 0;
//	
//	if(root->left==NULL&&root->right==NULL)
// 	return toint(root->val);
//	
//	int lval=eval(root->left);
//	int rval=eval(root->right);
//	
//	if(root->val=="+")
//	{
//		return lval+rval;
//	}
//	if(root->val=="-")
//	{
//		return lval-rval;
//	}
//	if(root->val=="*")
//	{
//		return lval*rval;
//	}
//	if(root->val=="/")
//	{
//		return lval/rval;
//	}
//}


int toint(string s)  
{  
    int num = 0;  
        
      // Check if the integral value is  
      // negative or not 
      // If it is not negative, generate the number  
      // normally 
      if(s[0]!='-') 
        for (int i=0; i<s.length(); i++)  
            num = num*10 + (int(s[i])-48);  
    // If it is negative, calculate the +ve number 
    // first ignoring the sign and invert the  
    // sign at the end 
      else
        for (int i=1; i<s.length(); i++)  
        { 
            num = num*10 + (int(s[i])-48);  
            num = num*-1; 
        } 
      
    return num;  
}  




int eval(node* root)  
{  
    // empty tree  
    if (!root)  
        return 0;  
  
    // leaf node i.e, an integer  
    if (!root->left && !root->right)  
        return toint(root->val);  

    // Evaluate left subtree  
    int l_val = eval(root->left);  
  
    // Evaluate right subtree  
    int r_val = eval(root->right);  
  
    // Check which operator to apply  
    if (root->val=="+")  
        return l_val+r_val;  
  
    if (root->val=="-")  
        return l_val-r_val;  
  
    if (root->val=="*")  
        return l_val*r_val;  
  
    return l_val/r_val;  
}  





int main()
{
	
//	cout<<toint("35566");

 node *root = new node("+");  
    root->left = new node("*");  
    root->left->left = new node("5");  
    root->left->right = new node("-4");  
    root->right = new node("-");  
    root->right->left = new node("100");  
    root->right->right = new node("20");  
    cout << eval(root) << endl;  

//cout<<eval(root);	
}
