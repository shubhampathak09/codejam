// printing lcs
#include<bits/stdc++.h>
using namespace std;


string lcs(string s1,string s2)
{
	int n=s1.length();
	int m=s2.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	int index=dp[n][m];
	
	int i=n,j=m;
	string str;
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			str.push_back(s1[i-1]);
			i--;
			j--;
		}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			i--;
		}
		else
		j--;
	}
	
	reverse(str.begin(),str.end());
	return str;
}

int main()
{
	
	string s1="abbbcd";
	string s2="bdef";
	
	cout<<lcs(s1,s2);
}
