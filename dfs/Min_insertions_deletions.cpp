// minimum deletions and insertions required

// heap ->pea
// ea-> 2 del
// 1 insertions

#include<bits/stdc++.h>
using namespace std;


int getlcs(string s1,string s2,int m,int n)
{
	
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
	
	return dp[n][m];
}

int main()
{
	
	string s1="heap";
	string s2="pea";
	
	int n=s1.length();
	int m=s2.length();
	
	int l=getlcs(s1,s2,n,m);
	cout<<"Min deletion req is.."<<n-l;
	cout<<endl;
	cout<<"Min insertions req is.."<<m-l;
	
}
