// printing longest common subsequence

#include<bits/stdc++.h>
using namespace std;

// print sq

void lcsprint(string s1,string s2,int n,int m)
{
//	cout<<"in";
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
		//	cout<<"yes";
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			
			else 
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
    
//	cout<<dp[n][m];
	
		
	int index=dp[n][m];
	
	char s[index+1];
	s[index]='\0';      // terminating character
	int i=n,j=m;
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			
			s[index-1]=s1[i-1];
			i--;
			j--;
			index--;
		}
	   else if(dp[i-1][j]>dp[i][j-1])
	   {
	   	i--;
	   }
	   else 
	    j--;
	}
	
	cout<<s;
}

int main()
{
		
string s1="abcdscs";

string s2="dcdsnjc";

int n=s1.length();

int m=s2.length();

lcsprint(s1,s2,n,m);
	
}
