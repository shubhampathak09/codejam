// A CLEAR APPROACH USING DP
#include<bits/stdc++.h>
using namespace std;


bool check_interleaving(string s1,string s2,string s3)
{
	
	int m=s1.length();  //s1
	int n=s2.length();  //s2
	int k=s3.length();  //s3
	
	bool dp[m+1][n+1];
	memset(dp,0,sizeof(dp));
	
	if(m+n!=k)
	return false;

	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0&&j==0)
			dp[i][j]=1;
			
			else if(i==0)
			{
				if(s2[j-1]==s3[i+j-1])
				dp[i][j]=dp[i][j-1];
			 
			 }
			 else if(j==0)
			 {
			 	if(s1[i-1]==s3[i+j-1])
			 	dp[i][j]=dp[i-1][j];
			  }
			  
			  else if(s1[i-1]==s3[i+j-1]&&s2[j-1]!=s3[i+j-1])
			  {
			  	dp[i][j]=dp[i-1][j];
			   }
			    else if(s1[i-1]!=s3[i+j-1]&&s2[j-1]==s3[i+j-1])
			    {
			    	dp[i][j]=dp[i][j-1];
				}
				else if(s1[i-1]==s3[i+j-1]&&s2[j-1]==s3[i+j-1])
				{
					dp[i][j]=dp[i-1][j]||dp[i][j-1];
				}
		}
		}
		return dp[n][m];	
}

int main()
{ 

cout<<check_interleaving("XXY","XXZ","XXXXZY");
cout<<endl;

cout<<check_interleaving("YX","X","XXY");
cout<<endl;

//cout<<check_interleaving("XY","X","XXY");	INCORRECT TEST OUTPUT?
}
