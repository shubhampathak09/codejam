// prefix function kmp

#include<bits/stdc++.h>
using namespace std;



int main()
{
	
	string s="bababacbba";
	
	int n=s.length();
	
	
	int prefix[n];
	
	prefix[0]=0;
	
	for(int i=1;i<=n-1;i++)
	{
		int l=prefix[i-1];
		
		while(l>0&&s[i]!=s[l])
		{
			l=prefix[l-1];
		}
		if(s[i]==s[l])
		{
			l++;
			 
		}
		prefix[i]=l;
	}
	
	for(auto x:prefix)
	{
		cout<<x<<" ";
		
	}
}


/*
void calulateprefix(string s,int n)
{
	
	int pi[n];
	
	pi[0]=0;
	for(int i=1;i<n;i++)
	{
	
	l=pi[i-1];
	
	while(l>0&&s[i]!=s[l])
	{
		l=pi[l-1];
	}
	
	if(s[i]==s[l])
	l++;
	prefix[i]=l;
	}
}
*/
