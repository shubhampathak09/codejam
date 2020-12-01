// longest common substring
#include<bits/stdc++.h>
using namespace std;

int longest_common_substring(string s1,string s2)
{
	
	int m=s1.length();
	int n=s2.length();
	
	int dp[m+1][n+1];
	
	int len=INT_MIN;
	
	int ipos=0,jpos=0;
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
				if(len<dp[i][j])  //len=max(len,dp[i][j])
				{
					len=dp[i][j];
					 ipos=i;
					 jpos=j;
				}
			}
			else
			dp[i][j]=0;
		}
	}
	
//	string substring;
	
/*	while(ipos>=0&&jpos>=0)
	{
		substring.push_back(s1[ipos-1]);
		ipos--;
		jpos--;
	}
*/	
//	reverse(substring.begin(),substring.end());
	
//	cout<<substring;
	
	return len;
}

int main()
{
	string s1="abcdxyz";
	string s2="xyzabcd";
	
	cout<<longest_common_substring(s1,s2);
}
