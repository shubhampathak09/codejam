#include<bits/stdc++.h>
using namespace std;

// cat -cut(3) 
// ct 
// n ->cat m->cut and p->lcs
// n-c + m-c = m+n-2c= 6-4 2


// to inset and delete

// lcs + some variations= edit distance with only insert and delte

int lcs(string s1,string s2)
{
	int n=s1.length();
	int m=s2.length();
	
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[j-1]==s2[i-1])
			dp[i][j]=1+dp[i-1][j];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[m][n];
  }  
  
  int main()
  {
  	
  //	cout<<lcs("cater","cuter");
  
  string s1="acb";
  string s2="ab";
  
  int n=s1.length();
  int m=s2.length();
  
  
  cout<<n+m - 2*lcs(s1,s2);
  	
  }
