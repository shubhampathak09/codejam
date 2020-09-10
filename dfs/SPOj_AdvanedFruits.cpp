// SPOJ advanced fruits

#include<bits/stdc++.h>
using namespace std;


string print_seq(string s1,string s2)
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
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	string temp;
	int i=n,j=m;
	
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			temp.push_back(s1[i-1]);
			i--;
			j--;
			
		}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			temp.push_back(s2[j-1]);
			j--;
			
		}
		else
		{
			temp.push_back(s1[i-1]);
			i--;
		}
	}
	
	while(i>0)
	{
		temp.push_back(s1[i-1]);
		i--;
	}
	while(j>0)
	{
		temp.push_back(s2[j-1]);
		j--;
	}
	
	reverse(temp.begin(),temp.end());
	
	return temp;
}

int main()
{
	
	string s1="peach";
	string s2="pear";
	
	cout<<print_seq(s1,s2);
	
}
