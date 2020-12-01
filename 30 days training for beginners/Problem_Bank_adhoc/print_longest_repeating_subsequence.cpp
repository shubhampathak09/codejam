// printing longest_repeating subsequence
#include<bits/stdc++.h>
using namespace std;

string print_longest_repeat(string s1,string s2)
{
	int m=s1.length();
	int n=s2.length();
	
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]&&i!=j)
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	string temp;
	
	int i=m,j=n;
	
	while(i>=0&&j>=0)
	{
		
		if(s1[i-1]==s2[j-1]&&i!=j)
		{
			temp.push_back(s1[i-1]);
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
	reverse(temp.begin(),temp.end());
	
	return temp;
}

int main()
{
	

string s="AABEBCDD";
 	
cout<<print_longest_repeat(s,s);	
}
