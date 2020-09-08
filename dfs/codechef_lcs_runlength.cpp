// codechef lcs in runlength encoded string

#include<bits/stdc++.h>
using namespace std;


string runlength_to_string(string s)
{
	
	int n=s.length();
	string val="";
	
	for(int i=0;i<n;i+=2)
	{
		char c=s[i];
		int j=s[i+1]-'0';
		while(j--)
		{
			val+=c;
		}
	}
	return val;
	
}

int lcs(string s1,string s2)
{
	int  n=s1.length();
	int m=s2.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[n][m];
}


int main()
{
	string s1="a3b2";
	string s2="b3";
	
	cout<<lcs(runlength_to_string(s1),runlength_to_string(s2));
//cout<<runlength_to_string("a4b6c1");	
}
