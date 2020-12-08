// binary search pattern matcher
#include<bits/stdc++.h>
using namespace std;

int pattern_matcher(string pattern,string text)
{
	
	int m=pattern.length();
	int n=text.length();
	
	int dp[m+1][n+1];
	
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		dp[0][i]=0;
		
	}
	
	for(int i=1;i<=m;i++)
	{
	/*	if(pattern[i-1]!='*')
		dp[i][0]=0;
		if(i==1&&pattern[i-1]=='*')
		dp[i][0]=0;
		else if(pattern[i-1]=='*')
		dp[i][0]=dp[i-2][0];
		else
		dp[i][0]=0;
		*/
		
		if(pattern[i-1]=='*')
		{
			if(i==1)
			dp[i][0]=1;
			else
			dp[i][0]=dp[i-1][0];
		}
		else dp[i][0]=0;
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pattern[i-1]==text[j-1]||pattern[i-1]=='.')
			dp[i][j]=dp[i-1][j-1];
			
			else if(pattern[i-1]=='*'&&(pattern[i-2]==text[j-1]||pattern[i-2]=='.'))
			{
			int index=i-1;
			dp[i][j]=dp[index-1][j]||dp[index][j-1];
		}
			else 
			dp[i][j]=0;
		}
	}
	return dp[m][n];
}

int main()
{
	
	
	string pattern="a*";
	
	string text="a";
	
	cout<<pattern_matcher(pattern,text);
	
	// think recursively
	
	// test case 4 and 3 seems incorrect
	
	// index =i-1
//	fixed have to go to previous char and just check dp[index-1][j] or dp[index][j-1]

}

// some fixes

/*

 
	int m=pattern.length();
	int n=text.length();
	
	int dp[m+1][n+1];
	
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		dp[0][i]=0;
		
	}
	
	for(int i=1;i<=m;i++)
	{
		if(pattern[i-1]!='*')
		dp[i][0]=0;
 
		else
		dp[i][0]=dp[i-2][0];
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pattern[i-1]==text[j-1]||pattern[i-1]=='.')
			dp[i][j]=dp[i-1][j-1];
			
			else if(pattern[i-1]=='*'&&(pattern[i-2]==text[j-1]||pattern[i-1]=='.'))
			{
			int index=i-1;
			dp[i][j]=dp[index-1][j]||dp[index][j-1];
		}
			else 
			dp[i][j]=0;
		}
	}
	return dp[m][n];
	*/
