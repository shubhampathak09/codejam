#include<bits/stdc++.h>
using namespace std;

int min(int a,int b)
{
 if(a<b)
 return a;
 else
 return b;

}


int minedistance(string s1,string s2,int n,int m)
{

int dp[n+1][m+1];
 
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=i; //remove
	}
	for(int i=0;i<=m;i++)
	dp[0][i]=i;  //insert
 
 dp[0][0]=0;
 
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
	 
		if(s1[i-1]==s2[j-1])
		{
			dp[i][j]=dp[i-1][j-1];
		}
		else
		dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));  //silly one
	}
 } 
   return dp[n][m];
 }
	
	 


int main()
{
	
	string s1="voldemort";
	string s2="dumbledore";
    int n=s1.length();
	int m=s2.length();	
	cout<<minedistance(s1,s2,n,m);
	
}
