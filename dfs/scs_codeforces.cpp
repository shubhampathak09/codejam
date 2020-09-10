// shortest commmon supersequence length printing

#include<bits/stdc++.h>
using namespace std;

int scs(string s1,string s2)
{
	
	int n=s1.length();
	int m=s2.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0)
			dp[i][j]=j;
			else if(j==0)
			dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=1 + min(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	int i=n,j=m;
	string temp;
	int index=dp[n][m];
	
	while(i>=0&&j>=0)
	{
		if(s1[i-1]==s2[j-1])
		{
		
		temp.push_back(s1[i-1]);
		i--;
		j--;
		index--;
	}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			temp.push_back(s2[j-1]);
			
			
				j--;
				index--;
		}
		else
		{
			temp.push_back(s1[i-1]);
			i--;
			index--;
		}
		
	}
	while(i>0)
	{
		temp.push_back(s1[i-1]);
		i--;
		index--;
	}
	
	while(j>0)
	{
		temp.push_back(s2[j-1]);
		j--;
		index--;
	}
	
	reverse(temp.begin(),temp.end());
	
	cout<<temp;
	cout<<"\n";
	return dp[n][m];
}

int main()
{
	
	string s1="rat";
	string s2="cattle";
	cout<<scs(s1,s2);
}
