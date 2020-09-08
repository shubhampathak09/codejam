
#include<bits/stdc++.h>
using namespace std;

int editdistance(string s1,string s2)
{
	int m=s1.length();  // pls care
	int n=s2.length();  // pls care
	
	//  m col and r =rows
	int dp[m+1][n+1];   // care
	 
	 for(int i=0;i<=m;i++)
	 {
	 	for(int j=0;j<=n;j++)
	 	{
	 		if(i==0)
	 		dp[i][j]=j;
	 		else if(j==0)
	 		dp[i][j]=i;
	 		else if(s1[i-1]==s2[j-1])
	 		dp[i][j]=dp[i-1][j-1];
	 		else
	 		dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
		 }
	 }
	 
	 return dp[m][n];
}

int main()
{
	
	cout<<editdistance("intention","execution");
}
