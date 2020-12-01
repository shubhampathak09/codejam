#include<bits/stdc++.h>
using namespace std;


int palindromic_lcs(string s1,string s2)
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
			
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[m][n];
}

int main()
{
	
	string s="aebcbda";
	
	string temp=s;
	reverse(temp.begin(),temp.end());
	
	cout<<"number of deletion required to convert given string into palindrome.."<<s.length()-palindromic_lcs(s,temp);
	
	cout<<endl;
	cout<<palindromic_lcs(s,temp);
}

