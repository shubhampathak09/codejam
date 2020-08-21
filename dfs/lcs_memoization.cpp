#include<bits/stdc++.h>
using namespace std;

// LCS +memoise
int static dp[1001][1001];



int lcs(string s1,string s2,int n,int m)
{
	
	
	if(n==0||m==0)
	return 0;
	
	if(dp[n][m]!=-1)
	return dp[n][m];
	
	if(s1[m-1]==s2[n-1])
	return dp[n][m]=1+dp[n-1][m-1];
	else
	return dp[n][m]=max(dp[n-1][m],dp[n][m-1]);
}

int main()
{
string s1;
string s2;

s1="abcddee";
s2="ab";
int n=s1.length();
int m=s2.length();


memset(dp,-1,sizeof(dp));

cout<<lcs(s1,s2,n,m);		
	
}
