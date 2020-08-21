// longest common substring

#include<bits/stdc++.h>
using namespace std;


int lcommonsub(string s1,string s2,int n,int m)
{
	
int dp[n+1][m+1];	

int maxlen=0;
//int len=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=m;j++)
	{
		
		if(i==0||j==0)
		dp[i][j]=0;
		
		else if(s1[i-1]==s2[j-1])
		{
		  // len++;
		   dp[i][j]=1+dp[i-1][j-1];
		   maxlen=max(maxlen,dp[i][j]);	
		}
		else
		dp[i][j]=0;
	}
	}	
	//return dp[n]; 
	return maxlen;  // to length of longrst common substring;
}


int main()
{


string s1="OldSite:GeeksforGeeks.org";
string s2="NewSite:GeeksQuiz.com";

int n=s1.length();
int m=s2.length();

cout<<lcommonsub(s1,s2,n,m);
}
