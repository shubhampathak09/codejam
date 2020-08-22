
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s="bababacbba";
	
	int n=s.length();
	
	int prefix[n];
	
	
	prefix[0]=0;
	int l;
	for(int i=1;i<=n-1;i++)
	{
		
		l=prefix[i-1];
		
		while(l>0&&s[i]!=s[l])
		{
			l=prefix[l-1];
		}
		if(s[i]==s[l])
		l++;
		prefix[i]=l;
	}
	
	 for(int i=0;i<n;i++)
	 cout<<prefix[i]<<"\t";
	
	
}
