#include<bits/stdc++.h>
using namespace std;


int editdistance(string s1,string s2,int n,int m)
{
	// string 1 - string 2
	int dp[n+1][m+1];
	
	for(int i=0;i<=m;i++)
	{
		dp[i][0]=i;
	}
	for(int i=0;i<=n;i++)
	dp[0][i]=i;
	
	dp[0][0]=0;
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			
			if(s1[j-1]==s2[i-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
		}
	}
	return dp[m][n];
}

int main()
{
	
	cout<<editdistance("geek","gesk",4,4);
	
}
