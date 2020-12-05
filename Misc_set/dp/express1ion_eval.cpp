#include<bits/stdc++.h>
using namespace std;


bool expression_eval(string s)
{
	
 
	
	stack<char>stk;
	char x;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[')
		{
			stk.push(s[i]);
		}
		
		if(stk.empty())
		return false;
		
		switch(s[i])
		{
			case ')':
				 x=stk.top();
				stk.pop();
			    if(x=='}'||x==']')
			    return false;
			    break;
			    
			case '}' :
			 x=stk.top();
			stk.pop();
			if(x=='('||x=='[')
			return false;
			break;
			
			case  ']':
			 x=stk.top();
			stk.pop();
			if(x=='('||x=='{')
			return false;
			break;    
		}
	}
	
	
	if(!stk.empty())
	return false;
	else
	return true;
}

int main()
{
	
	
	string test1="{{}}";  // 1
	
	string test2="[{()}]";  // 1
	
	string test3="{(})"; // 0
	
	string test4="";  //0
	
	string test5="[[[[[";  //0
	
	string test6="()]]]{}";  //0
	
	
	cout<<expression_eval(test1)<<"\t"<<expression_eval(test2)<<"\t"<<expression_eval(test3)<<"\t"<<expression_eval(test4)<<"\t"<<expression_eval(test5)<<"\t"<<expression_eval(test6)<<"\t";
	
}
