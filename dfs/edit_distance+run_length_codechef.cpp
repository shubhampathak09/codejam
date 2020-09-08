// codechef editdistance +lcs+runlength

#include<bits/stdc++.h>

using namespace std;

string run_length(string s)
{
	
	int n=s.length();
	string res="";
	for(int i=0;i<n;i+=2)
	{
		char c=s[i];
		int j=s[i+1]-'0';
		while(j--)
		{
			res+=c;
		}
	}
	return res;
}

int lcs(string s1,string s2)
{   

    // cost of insertion 1
    // cost of deletion is 2
	int n=s1.length(),m=s2.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][m];
}

// find min edits req

int main()
{
	
	string s1="a1b1a1";
	string s2="a2";
	
 s1=run_length(s1);
 s2=run_length(s2);
 
 int n=s1.length();
 int m=s2.length();
// 
// cout<<s1<<s2;

int lcs_length=lcs(s1,s2);
//cout<<lcs_length;

int deletion=(n-lcs_length)*2;
int insertions=(m-lcs_length)*1;
 
cout<<deletion+insertions; 
 }
