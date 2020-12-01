
#include<bits/stdc++.h>
using namespace std;


//text->i &&  pattern ->j

bool wildcard_matcher(string text,string pattern)
{
	
	int m=pattern.length();
	
	int n=text.length();
	
	
	int dp[m+1][n+1];
	
	memset(dp,0,sizeof(dp));
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
    
	dp[0][0]=1; 	
	for(int i=1;i<=m;i++)
	{
		if(pattern[i-1]=='*')
		dp[0][i]=dp[0][i-1];
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pattern[i-1]=='*')
			{
				dp[i][j]=dp[i-1][j]||dp[i][j-1];
			}
			else if(pattern[i-1]='?'||pattern[i-1]==text[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=0;
		}
	}
	return dp[m][n];
	
}

int main()
{
	
	string text="baaabab";
//	string pattern="*****ba*****ab";
	
//	string pattern1="a*ab";
	
	cout<<wildcard_matcher(text,pattern)<<endl;
	
//	cout<<wildcard_matcher(text,pattern1)<<endl;
	
// not working for all test cases need to check	
}
