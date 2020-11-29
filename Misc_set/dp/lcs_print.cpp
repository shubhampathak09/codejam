// printing lcs

#include<bits/stdc++.h>
using namespace std;

void lcs(string s1,string s2)
{
	
	int n=s1.length();
	
	int m=s2.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	int i=n,j=m;
	string s="";
	while(i>=0&&j>=0)
	{
		
		if(s1[i-1]==s2[j-1])
		{
			s.push_back(s1[i-1]);
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
	reverse(s.begin(),s.end());
	cout<<s;
	
}

int main()
{
	
	string s1="asdfcxed";
	
    string s2="asdsdw";
    
    int n=s1.length();
    
    int m=s2.length();
	
	lcs(s1,s2);
}
