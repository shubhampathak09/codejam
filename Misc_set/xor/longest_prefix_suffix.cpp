#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s="aabcdaabc";
	
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
			l=l+1;
		}
		prefix[i]=l;
	}
	int m=INT_MIN;
	for(auto x:prefix)
	{
		m=max(m,x);
		cout<<x<<" ";
	}
	
	cout<<endl;
	cout<<"Length is "<<m<<endl;
	cout<<"Longest prefix that is also suffix.."<<s.substr(0,m);
}

int main()
{
	 
	solve();
	
}
