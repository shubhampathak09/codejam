#include<bits/stdc++.h>
using namespace std;


// SPOJ Aibohpobia

int lcs(string s1,string s2)
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
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[n][m];
}

int main()
{
	
//	string s1="abcd";
//	string s2="bcd";

// minimum characters to add to string to make it planidrome

//fft

string s="fft";
string temp=s;
reverse(temp.begin(),temp.end());

int n=s.length();
cout<<n-lcs(s,temp);
	
//	cout<<lcs(s1,s2);
}
