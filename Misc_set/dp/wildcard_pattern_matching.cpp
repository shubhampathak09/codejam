// type -1 
// wild card patter matchin
// check if wild card pattern matches with text or not
// pattern contains ? and *
/// ? matches any single character
// * matches 0 or any character

// text="baaabab";
// pattern=“*****ba*****ab"


#include<bits/stdc++.h>
using namespace std;


bool wildcard(string text,string pattern)
{
	
	int m=text.length();
	int n=pattern.length();
	
	int dp[m+1][n+1];
	
	dp[0][0]=1;
	
	for(int i=1;i<=m;i++)
	dp[0][i]=0;
	
	for(int i=1;i<=n;i++)
	{
		if(pattern[i-1]=='*')
		{
			dp[i][0]=dp[i-1][0];
		}
		else dp[i][0]=0;
		}
		
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(pattern[j-1]=='*')
			{
				dp[i][j]=dp[i][j-1]||dp[i-1][j];
			}
			else if(text[i-1]==pattern[j-1]||pattern[j-1]=='?')
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			dp[i][j]=0;
		}
			}
			return dp[m][n];		
}


int main()
{
	string pattern="a*ab";
	
	string text="baaabab";
/*	
	0 b a  a a b a b
0   1 0 0  0 0 0 0 0
*   1 1 1  1 1 1 1 1
*   1
*   1
*   1
b   0
a   0
*   0
*   0
*   0
*   0
b	0
	
	*/
	
	cout<<wildcard(text,pattern);
	
	
	// fuck again 03 dec -20202
   //yeah but we fixed:d
}
