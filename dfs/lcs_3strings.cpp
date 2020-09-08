#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,string s3)
{
	int n=s1.length();
    int m=s2.length();
    int a=s3.length();
    
	int dp[n+1][m+1][a+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k<=a;k++)
			{
				if(i==0||j==0||k==0)
				dp[i][j][k]=0;
				
				else if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1])
				dp[i][j][k]=1+dp[i-1][j-1][k-1];
				else
				dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
			}
		}
	}
	
	return dp[n][m][a];
}

int main()
{
	string s1="geeks";
	string s2="geeksfor";
	string s3="geeksforgeeks";
	
	cout<<lcs(s1,s2,s3);
}
