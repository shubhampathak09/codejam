// lcs of 3 sequence
// string X = "ABCBDAB", Y = "BDCABA", Z = "BADACB";


#include<bits/stdc++.h>
using namespace std;


int lcs_k_sequences(string s1,string s2,string s3)
{

int n=s1.length();
int m=s2.length();
int k=s3.length();	

int dp[n+1][m+1][k+1];

	
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=m;j++)
	{
		for(int l=0;l<=k;l++)
		{
			if(i==0||j==0||l==0)
			dp[i][j][l]=0;
			
			
			else if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[l-1])
			{
				dp[i][j][l]=dp[i-1][j-1][l-1]+1;
			}
			else
			{
				dp[i][j][l]=max(dp[i-1][j][l],max(dp[i][j-1][l],dp[i][j][l-1]));
			}
			
		}
	}
	
	}	
	
	return dp[n][m][k];
}


int main()
{
	
string s1="ABCBDAB";
string s2="BDCABA";
string s3="BADACB";


cout<<lcs_k_sequences(s1,s2,s3);

//int dp[n+1][m+1][k+1];

	
	
}
