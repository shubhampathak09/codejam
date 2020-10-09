// we are claer lol let impl some tough problems

// stack reverse

#include<bits/stdc++.h>
using namespace std;

stack<int>s;

void insert_bottom(int v)
{
	if(s.size()==0)
	{
		s.push(v);
	}
	else
	{
		int a=s.top();
		s.pop();
		insert_bottom(v);
		s.push(a);
	}
	
}

void reverse()
{
   // cout<<"in";	
	if(s.size()>0)
	{
	//	cout<<"in2";
    int x=s.top();
	s.pop();
	reverse();
	insert_bottom(x);	
	}
	
}


int main()
{
	
	//stack<int>s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

    stack<int>temp=s;
	
//	cout<<s.size();
	
/*	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
	}
*/	
	cout<<endl;
	
	//stack<int>temp=s;
	 reverse();
    
    while(!s.empty())
    {
    	cout<<s.top()<<"  ";
    	s.pop();
	}
}
