// postfix expression evaluation]
#include<bits/stdc++.h>
using namespace std;



int main()
{
// 1+2*3+4 1 2 3 4+*+

// 1+(2*3) +4  123*+4+ 
string s="231*+9-";  // 2+3*1 + 1-9=6 -8

stack<int>st;

//cout<<s[0]-'0';	

for(int i=0;i<s.length();i++)
{
	if(s[i]>='0'&&s[i]<='9')
	{
		st.push(s[i]-'0');
	}
	else if(s[i]=='+')
	{
		int a=st.top();
		st.pop();
		int b=st.top();
		st.pop();
		int result=a+b;
//		cout<<result<<" ";
		st.push(result);
	}
	else if(s[i]=='/')
	{
		int a=st.top();
		st.pop();
		int b=st.top();
		st.pop();
		int result=a/b;
//		cout<<result<<" ";
		st.push(result);
	}
	else if(s[i]=='-')
	{
		int a=st.top();
		st.pop();
		int b=st.top();
		st.pop();
		int result=b-a;
//		cout<<result<<" ";
		st.push(result);
	}
	else if(s[i]=='*')
	{
		int a=st.top();
		st.pop();
		int b=st.top();
		st.pop();
		int result=a*b;
//		cout<<result<<" ";
		st.push(result);
	}
	else
	{
		cout<<"Invalid expression";
		break;
	}
}


if(st.size()>1)
{
	cout<<"Incorrect prefix expression";

}
else
cout<<st.top();


//cout<<st.size();
	
}
