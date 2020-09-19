#include<bits/stdc++.h>
using namespace std;

// {{[]}}(({[]}))
bool checkparentheses(string s)
{
	stack<int>st;
	int m=s.length();
	for(int i=0;i<m;i++)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[')
		{
		
		st.push(s[i]);
		continue;
}
		if(st.empty())
		return false;
		
		else
		{
			if(s[i]==')')
			{
			char x=st.top();
			st.pop();
			if(x!='(')
			return false;	
			}
			else if(s[i]=='}')
			{
			char x=st.top();
			st.pop();
			if(x!='{')
			return false;	
			}
			else
			{
			char x=st.top();
			st.pop();
			if(x!='[')
			return false;	
			}
			
		}
		
	
	}
	return st.empty();
	
}

int main()
{
	
	cout<<checkparentheses("{{[]}}(({[]}))");
	
	cout<<endl;
	
	cout<<checkparentheses("{]()}");
}
