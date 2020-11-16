// lcs dp
// palinfromics lcs
// edit diatancw
// insertion to convert
// deleltion to convert
// print lcs
// knapsack
//longest common increzsing subsequence
// etc 
#include<bits/stdc++.h>

using namespace std;

int lcs(string s1,string s2,int n,int m)
{
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
	
	string s1="ascdffgh";
	
	string s2="asch";
	
	int n=s1.length();
	
	int m=s2.length();
	
	cout<<lcs(s1,s2,n,m);
}

